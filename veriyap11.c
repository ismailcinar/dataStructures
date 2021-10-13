#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
	int data;
	struct node * next;
	struct node * prev;
	
};

struct node * start=NULL;
struct node * temp=NULL;
struct node * temp2=NULL;
struct node * prev=NULL;

void basaEkle(int sayi)
{
	struct node * eleman=(struct node *) malloc(sizeof(struct node));
	eleman->data=sayi;
	if(start==NULL)
	{
		start=eleman;
		start->next=start;
		start->prev=start;
	}
	else
	{
		if(start->next==start)
		{
			start->next=eleman;
			start->prev=eleman;
			eleman->next=start;
			eleman->prev=start;
			start=eleman;
		}
		else
		{
			temp=start;
			while(temp->next!=start)
			{
				temp=temp->next;
				
			}
			temp->next=eleman;
			eleman->prev=temp;
			eleman->next=start;
			start->prev=eleman;
			start=eleman;
		}
	}
}

void sonaEkle(int sayi)
{
	struct node * eleman=(struct node *) malloc(sizeof(struct node));
	eleman->data=sayi;
	eleman->next=start;
	if(start==NULL)
	{
		start=eleman;
		start->next=start;
		start->prev=start;
	}
	else
	{
		if(start->next==start)
		{
			start->next=eleman;
			start->prev=eleman;
			eleman->next=start;
			eleman->prev=start;
		}
		else
		{
			temp=start;
			while(temp->next!=start)
			{
				temp=temp->next;
				
			}
			temp->next=eleman;
			eleman->prev=temp;
			eleman->next=start;
			start->prev=eleman;
		}
	}
}


void sondanSil()
{
	if(start==NULL)
	{
		printf("liste bos. \n");
	}
	else
	{
		if(start->next==start)
		{
			free(start);
			start=NULL;
		}
		else
		{
			temp=start;
			while(temp->next!=start)
			{
				temp=temp->next;
			}
			temp2=start->next;
			free(start);
			temp->next=temp2;
			temp2->prev=temp;
			start=temp2;
		}
		
	}
	}
	
	void bastanSil()
{
	if(start==NULL)
	{
		printf("liste bos. \n");
	}
	else
	{
		if(start->next==start)
		{
			free(start);
			start=NULL;
		}
		else
		{
			temp=start;
			while(temp->next!=start)
			{
				temp=temp->next;
			}
			temp2=temp->prev;
			free(temp);
			temp2->next=start;
			start->prev=temp;
			
		}
		
	}
	}

int elemanSay()
{
	int adet=0;
	if(start==NULL)
	{
		return 0;
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			adet++;
			temp=temp->next;
		}
		adet++;
		return adet;
	}
}

int elemanToplam()
{
	int toplam=0;
	if(start==NULL)
	{
		return 0;
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			toplam+=temp->data;
			temp=temp->next;
		}
		toplam+=temp->data;
		return toplam;
	}
}	
	void listele()
	{
		system("cls");
		if(start==NULL)
		{
			printf("liste bos \n");
		
		}
		else
		{
			temp=start;
			while(temp->next!=start)
			{
				printf("%d ->",temp->data);
				temp=temp->next;
			}	
				printf("%d ",temp->data);
		}
	}
	

int main(){
	
	while(1)
	
	{
		int sayi,secim;
	printf("\n1--Basa EKle \n");
	printf("2--Sona Ekle \n");
	printf("3--Bastan Sil \n");
	printf("4--Sondan Sil \n");
	printf("5--Eleman Sayisi \n");
	printf("6--Eleman Toplami \n");		printf("5--BasaEKle \n");
	printf("7--listele \n");
	printf("---Seciminizi yapiniz \n");
	printf("0--- Cikis \n");


	scanf("%d",&secim);
	switch(secim)
	{
		case 1:printf("basa eklenecek sayi");
		scanf("%d",&sayi);
		basaEkle(sayi);
		break;
		case 2:printf("sona eklenecek sayi");
		scanf("%d",&sayi);
		sonaEkle(sayi);
		break;
		case 3: bastanSil();
		break;
		case 4: sondanSil();
		break;
		case 5: printf("eleman adeti : %d ",elemanSay());
		break;
		case 6: printf("eleman toplami : %d ",elemanToplam());
		break;
		case 7:listele();
		break;
		case 0: exit(0);
	}
	}

	
	return 0;
}
