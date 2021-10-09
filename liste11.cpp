#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * next;

};

struct node * start =NULL;
struct node * temp =NULL;
struct node * prev =NULL;

void basaEkle(int veri)
{
	struct node * eleman =(struct node *)malloc(sizeof(struct node));
	eleman->data=veri;
	if(start==NULL){
		start=eleman;
		start->next=NULL;
	}	
	else{
		temp=start;
		start=eleman;
		start->next=temp;
	}
}

void sonaEkle(int veri){
	
	struct node * eleman = (struct node *)malloc (sizeof(struct node));
	eleman->data=veri;
	eleman->next=NULL;
	
	if(start==NULL)
	{
		start=eleman;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=eleman;
	}
}

void bastanSil()
{
	if(start==NULL)
	printf("Liste bos, silinecek eleman yok. \n");
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
		start=temp;
	}
		
	}
}

void sondanSil()
{
	if(start==NULL)
	{
		printf("liste bos \n");
	}
	else
	{
		temp=start;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		prev=temp;
		free(temp->next);
		prev->next=NULL;
	}
}


void listele(){
	system("cls");
	if(start==NULL){
		printf("liste bos \n");
		start=NULL;
	}
	else{
		temp=start;
		while(temp->next!=NULL){
			printf("%d ->",temp->data);
			temp=temp->next;
		}printf("%d ",temp->data);
	}
}
int main() {
	while(1){
	
	int secim , sayi;	
	printf("\n\t MENU \n");
		printf("1---->Basa eleman ekle \n");
			printf("2---->Sona eleman ekle \n");
				printf("3---->Bastan eleman sil \n");
					printf("4---->Sondan eleman sil\n");
						printf("5---->Eleman adeti \n");
							printf("6---->Eleman deger toplami \n");
								printf("7---->Listele \n");
									printf("8---->CIKIS \n");
				
									printf("Seciminizi yapiniz");
									
	scanf("%d",&secim);
	switch(secim)
	{
		case 1: printf("Basa eklenecek eleman : ");
		scanf("%d",&sayi);
		basaEkle(sayi);
		break;
		case 2: printf("Sona eklenecek eleman : ");
		scanf("%d",&sayi);
		sonaEkle(sayi);
		break;
		case 3: printf("Bastan eleman silmek icin : ");
		bastanSil();
		break;
		case 4: printf("Sondan eleman silmek icin : ");
		sondanSil();
		break;
		
		
		case 7: listele();
		break;
		case 8:
		return 0;
	}
		

	}	
		
		
	
	
	
	return 0;
}

