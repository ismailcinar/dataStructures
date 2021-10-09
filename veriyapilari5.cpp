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

void arayaEkle(int n,int dataa){
	struct node * eleman ;
	eleman = (struct node*) malloc (sizeof(struct node ));
	eleman->data= dataa;
	temp=start;
	while(temp->next->data != n)
	{
		temp=temp->next;
	}
	struct node * temp2;
	temp2 = (struct node *) malloc (sizeof(struct node));
	temp2=temp->next;
	temp->next=eleman;
	eleman->next=temp2;
	
}
void bastanSil(){

	if(start!=NULL)
	{
		temp=start->next;
		free(start);
		start=temp;
	}
	else
	free(start);
}
void sondanSil(){
		if( start->next!=NULL)
	{
			temp= start;
			while (temp->next->next!=NULL){
				temp=temp->next;
			}
			free(temp->next);
			temp->next=NULL;
	}
	else
	bastanSil();
}
void aradanSil(int veri){
	temp=start;
	if(temp->data==veri)
	{
		bastanSil();
	}
	else
	{
		struct node * temp2;
		temp2= (struct node *) malloc (sizeof (struct node));
		while(temp->next->data!=veri)
		{
			temp=temp->next;
		}
	
	if(temp->next->next==NULL)
	{
	sondanSil();	
	}
	else{ 
	temp2=temp->next->next;
	free( temp->next);
	temp->next=temp2;
	}
}
}

void tersCevir(){
	struct node * temp2=NULL;
	struct node * prev=NULL;
	temp=start;
	while(temp!=NULL){
		temp2=temp->next;
		temp->next=prev;
		prev=temp;
		temp=temp2;   
	}
	start=prev;
}
void print (){
	system("cls");
	if(start!=NULL){

	temp=start;
		
		while(temp->next!=NULL)
	{
		printf(" %d ",temp->data);
		temp=temp->next;
	}
			printf(" %d ",temp->data);
		}
		else
		{
			printf(" Eleman Yok !!! ");
		}

}
int elemanSayi(){
	int adet=0;
	if(start==NULL)
		return adet;
	else{
		temp=start;
		while(temp->next!=NULL){
		adet++;
		temp=temp->next;
		}
			adet++;
			return adet;
	}
}
int veriToplam(){
	int toplam=0;
	if(start==NULL)
	return 0;
	else{
		temp=start;
		while(temp->next!=NULL){
			toplam+=temp->data;
			temp=temp->next;
		}toplam +=temp->data;
	}return toplam;
}
int main(){
	
	int number, adet=0, choose,n;
	while(1)
	{
		printf("\nbasa eleman eklemek icin 1 \n");
		printf("sona eleman eklemek icin 2 \n");
		printf("araya eleman eklemek icin 3 \n");
		printf("bastan eleman silmek icin 4 \n");
		printf("sondan eleman silmek icin 5 \n");
		printf("aradan eleman silmek icin 6 \n");
		printf(" elemanlarý ters cevirmek icin 7 \n");
		printf(" eleman adeti icin 8 \n");
		printf(" eleman toplami icin 9 \n");

						printf("seciminizi yapin 1 \n");
						scanf("%d",&choose);
						
						switch(choose){
							case 1: printf(" basa eklenecek elemanin degeri :\n"); scanf("%d",&number);
							basaEkle(number);
							print();
							break;
							case 2: printf(" sona eklenecek elemanin degeri :\n"); scanf("%d",&number);
							sonaEkle(number);
							print();
							break;
							case 3: printf("Hangi sayýdan önce  :\n"); scanf("%d",&n);
							printf("araya eklenecek elemanin degeri  :\n"); scanf("%d",&number);
							arayaEkle(n,number);
							print();
							case 4: 
							bastanSil();
							print();
							break;
							case 5: 
							sondanSil();
							print();
							break;
							case 6: printf("aradan silinecek deðer");
							scanf("%d",&number);
							aradanSil(number);
							print();
							break;
							case 7: printf("elemanlar ters ceviriliyor...  : \n");
							tersCevir();
							print();
							break;
							case 8: printf("eleman adeti: %d",elemanSayi());
							break;
							case 9: printf("elemanlar toplamý : %d\n",veriToplam());
							veriToplam();
							break;
						}
adet++;
	}
	return 0;
}
