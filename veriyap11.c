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
	
	void listele()
	{
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
	printf("\n1--BasaEKle \n");
	printf("2--SonaEkle \n");
	printf("3--BasaEKle \n");
	printf("4--BasaEKle \n");
	printf("5--BasaEKle \n");
	printf("6--listele \n");
	printf("Seciminizi yapiniz \n");


	scanf("%d",&secim);
	switch(secim)
	{
		case 1:printf("basa eklenecek sayi");
		scanf("%d",&sayi);
		basaEkle(sayi);
		break;
		case 6:listele();
		break;
	}
	}

	
	return 0;
}
