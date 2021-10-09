#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node * next;
	
};
struct node * start = NULL;
struct node * temp = NULL;

void basaEkle (int dataa){
	struct node * eleman;
	eleman =(struct node *) malloc (sizeof(struct node));
	eleman->data=dataa;
	eleman->next=start;
	start=eleman;
}

void sonaEkle( int dataa){
	
	struct node * eleman;
	eleman = eleman =(struct node *) malloc (sizeof(struct node));
	eleman->data=dataa;
	eleman->next=NULL;
	if(start==NULL)
	{
		start=eleman;
	}
	else
	{
		temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=eleman;
	}
}
void print (){
	temp=start;
	while(temp->next!=NULL){
		printf(" %d ",temp->data);
		temp=temp->next;
	}
			printf(" %d ",temp->data);

}
int main(){
	
	int number, adet=0, choose;
	while(adet!=6)
	{
		printf("basa eleman eklemek için 1 \n");
				printf("basa eleman eklemek için 2 \n");
						printf("seciminizi yapin 1 \n");
						scanf("%d",&choose);
						
						switch(choose){
							case 1: printf(" basa eklenecek elemanin degeri :\n"); scanf("%d",&number);
							basaEkle(number);
							print();
							break;
							case 2: printf(" basa eklenecek elemanin degeri :\n"); scanf("%d",&number);
							sonaEkle(number);
							print();
							break;
						}

adet++;
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
