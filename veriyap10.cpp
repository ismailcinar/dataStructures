#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node{
	int data;
	struct node * next;
	struct node * prev;
};

struct node * next=NULL;
struct node * start=NULL;
struct node * temp=NULL;
struct node * prev=NULL;
struct node * temp2=NULL;

void basaEkle(int sayi)
{
	struct node * eleman=(struct node *)malloc (sizeof(struct node));
	eleman->prev=NULL;
	eleman->data=sayi;
	if(start==NULL)
	{
		start=eleman;
		start->next=NULL;
	}
	else
	{
		eleman->next=start;
		start=eleman;
	}
}
void sonaEkle(int sayi)
{
	struct node * eleman=(struct node *)malloc (sizeof(struct node));
	eleman->data=sayi;
	eleman->next=NULL;
	if(start==NULL)
	{
		start=eleman;
		start->next=NULL;
		start->prev=NULL;
	}
	else
	{
		if(start->next==NULL)
		{
			start->next=eleman;
			eleman->prev=start;
		}
		else
		{
			temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}	
			temp->next=eleman;
			eleman->prev=temp;
			
		}
		
	}
}
void bastanSil()
{
	if(start==NULL)
	{
		printf("liste bos, silinecek eleman yok\n");
	}
	else
	{
		if(start->next==NULL)
		{
			free(start);
			start=NULL;
		}
		else
		{
			temp=start->next;
			free(start);
			temp->prev=NULL;
			start=temp;
			
		}
	}
}

void sondanSil()
{
	if(start==NULL)
	{
		printf("liste bos, silinecek eleman yok\n");
	}
	else
	{
		if(start->next==NULL)
		{
			free(start);
			start=NULL;
		}
		else
		{
			
			temp=start;
			while(temp->next->next!=NULL)
			{
				temp=temp->next;
			}
			temp2=temp;
			free(temp->next);
			temp2->next=NULL;
			
			
		}
	}
}
void listele()
{
	system("cls");
	if(start==NULL)
	printf("liste bos \n");
else
{
	temp=start;
	while(temp->next!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;
	}
		printf("%d ",temp->data);

}
}

int elemanAdeti()
{

	int adet=0;
	if(start==NULL)
	{
		return 0;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			adet++;
			temp=temp->next;
		}
		adet++;
		return adet;
	}
	
}

int elemanToplami()
{
		int toplam=0;
	if(start==NULL)
	{
		return 0;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			toplam+=temp->data;
			temp=temp->next;
		}
		toplam+=temp->data;
		return toplam;
	}
}
int main ()
{
	
	while(1)
	{
		int sayi,secim;
		printf("\n1-- basa eleman ekle \n");
		printf("2-- Sona eleman ekle \n");
		printf("3-- bastan eleman sil \n");
		printf("4-- Sondan eleman sil \n");
		printf("5-- eleman sayisi \n");
		printf("6-- eleman toplami \n");
		printf("7-- listele \n");
		printf("8-- cikis \n");

		scanf("%d",&secim);
		switch(secim)
		{
			case 1: printf("basa eklenecek sayi :"); scanf("%d",&sayi);
			basaEkle(sayi);
			break;
			case 2: printf("sona eklenecek sayi :"); scanf("%d",&sayi);
			sonaEkle(sayi);
			break;
			case 3: bastanSil();
			break;
			case 4: sondanSil();
			break;
			case 5: printf("eleman sayisi : %d ",elemanAdeti());
			break;
			case 6: printf("eleman toplami : %d ",elemanToplami());
			break;
			case 7: listele();
			break;
			case 8: exit(0);
		}

	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}
