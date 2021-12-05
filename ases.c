#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10 //Specifying the maximum limit of the queue


typedef struct
{
	int value;
	
}element;

element queue[SIZE];

    int front = -1;
    int rear  = -1;

	int i;
	bool result =false;
	
int enqueue(int data)
{

	if(rear >= SIZE -1)
	{
		printf("The element adding is failed.\n");
		return result;
		
	}
	else 
	{
		if(front==-1) 
		front=0; 
		
		rear++;
		queue[rear].value = data;
		printf("The element has been successfully added.\n");
		result =true;
		return result;
		
		
	}
	
}


void dequeue()
{
	if(front == -1 )//|| front>rear)
	{
		printf("Queue is empty.\n");
		front = -1;
		rear  = -1;
	}
	else
	{
		front = front +1;
	}
}

void print_queue()
{
	system("cls");
	if(front == -1 || front>rear)
	{
		printf("Queue is empty.\n");
		
	}
	else
	{
		int i;
		for(i=front; i<=rear; i++)
		{
			printf("\t%d",queue[i].value);
		}
	}
	
	printf("\n");
}

int main()
{
	int choose,number;
	
	while(1)
	{
		printf("---------OPTIONS---------\n");
		printf("0- Print all elements of the queue\n");
		printf("1- Add an element into the queue\n");
		printf("2- Remove an element from the dequeu\n");
		printf("3- Exit\n");
		printf("Select(0-3)? ");
		scanf("%d",&choose);
		switch(choose)
		{
		case 0: print_queue();
		break;
		case 1: printf("Enter the value to add : ");
		scanf("%d", &number);

		enqueue(number);
		
		
		break;
		case 2: dequeue();
		break;
		case 3: exit(0);	
		}
		
	}
	
	return 0;
}
