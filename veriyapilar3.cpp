#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * pointer;
	
};

struct node * head = NULL;
struct node * gecici =NULL;

void addHead (int number){
	
	
	struct node * add;
	add = (struct node*) malloc (sizeof(struct node));
	add->data=number;
	add->pointer=head;
	head=add;
}


void printer(){
	
	gecici=head;
	while (gecici->pointer != NULL){
		printf(" %d ",gecici->data);
		gecici=gecici->pointer;
	}
	printf(" %d ",gecici->data);
}

int main(){
	int number;
	int adet=0;
	while (adet!=6)
	{
	printf("enter number");
	scanf("%d",&number);
	addHead(number);
	adet++;	
	}
	
	printer();
	
	
	return 0;
}
