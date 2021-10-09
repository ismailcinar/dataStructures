#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * next;
	
};
struct node * start=NULL;
struct node * temp=NULL;
struct node * prev=NULL;
struct node * last=NULL;

void basaEkle(int number)
{
	struct node * eleman=(struct node *) malloc(sizeof(struct node));
	eleman->data=number;
	
	if(start==NULL)
	{
		start=eleman;
		start->next=start;
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			temp=temp->next;
		}
		temp->next=eleman;
		eleman->next=start;
		start=eleman;
	}
}

void sonaEkle(int number)
{
	struct node * eleman=(struct node *) malloc(sizeof(struct node));
	eleman->data=number;
	
	if(start==NULL)
	{
		start=eleman;
		start->next=start;
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			temp=temp->next;
		}
		temp->next=eleman;
		eleman->next=start;
	}
}
void listele()
{	system("cls");
	if(start==NULL)
	{
		printf("liste bos \n");
	}
	else
	{
		temp=start;
		while(temp->next!=start)
		{
			printf("%d -> ",temp->data);
			temp=temp->next;
		}
			printf("%d  ",temp->data);

	}
}

void bastanSil()
{
	if(start == NULL)
	{
		printf("liste bos \n");
		
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
			last=start;
			while(last->next!=start)
			{
				last= last->next;
			}
			temp=start->next;
			free(start);
			last->next=temp;
			start=temp;
		}
	}
}
void sondanSil()
{
	if(start == NULL)
	{
		printf("liste bos \n");
		
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
			last=start;
			while(last->next->next!=start)
			{
				last= last->next;
			}
			temp=last;
			free(last->next);
			last->next=start;
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
	}
	return adet;
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
	}
	return toplam;
}
int main()
{
	while(1){
	
	int choose, number;
	printf("\n1--Basa eleman eklemek icin \n");
	printf("2--Sona eleman eklemek icin \n");
	printf("3--Bastan eleman silmek icin \n");
	printf("4--Sondan eleman silmek icin \n");
	printf("5--Eleman adeti icin \n");
	printf("6--Eleman toplami icin \n");
	printf("7--liste icin \n");
	scanf("%d",&choose);
	switch(choose)
	{
		
		case 1: printf("basa eklenecek sayi :");
		scanf("%d",&number);
		basaEkle(number);
		break;
		case 2: printf("Sona eklenecek sayi :");
		scanf("%d",&number);
		sonaEkle(number);
		break;
		case 3: bastanSil();
		break;
		case 4: sondanSil();
		break;
		case 5: printf("eleman adeti : %d",elemanSay());
		break;
		case 6: printf("eleman toplami : %d",elemanToplam());
		break;
		case 7: listele();
		break;
		
		
	}
	}
	
	
	
	return 0;
}
