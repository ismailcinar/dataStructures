#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node * pointer;
};
struct node * bas = NULL;
struct node * gecici = NULL;

void sonaEkle (int number){
	
	struct node * add;
	add = (struct node * ) malloc (sizeof(struct node));
	add->data =number ;
	add->pointer=NULL;
	
	if (bas==NULL)
	{
	bas=add;
		
	}
	else{
	gecici=bas;
		while (gecici->pointer!=NULL)
		{
			gecici=gecici->pointer;
		}
		gecici->pointer=add;
	}
	
	}


void yazdir() {
	gecici=bas;
	while(gecici->pointer!=NULL){
		printf(" %d ",gecici->data);
		gecici=gecici->pointer;
	}
			printf(" %d ",gecici->data);

}

int main (){
	
	int adet=0;
	while(adet!=5)
	{	int numb;
	printf("please write number");
	scanf("%d", &numb);
	sonaEkle(numb);
	adet++;
	}

	yazdir();
	
	
	return 0;
}
