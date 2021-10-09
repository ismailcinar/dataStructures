#include <stdio.h>
#include <stdlib.h>


	struct node {
		
		int data;
		struct node * pointer;
		
	};

int main() {
	
	
	struct node * one ;
one = (struct node * ) malloc (sizeof(struct node));

	struct node * two ;
two = (struct node * ) malloc(sizeof(struct node));

	struct node * three ;
three  = (struct node * ) malloc(sizeof(struct node));

	struct node * four ;
four = (struct node * ) malloc(sizeof(struct node));

one->data=11;
one->pointer=two;

two->data=20;
two->pointer=three;

three->data=29;
three->pointer=four;

four->data=37;
four->pointer=NULL;

printf("%d  %d  %d  %d",one->data,two->data,three->data,four->data);


	
	return 0;
}
