#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

typedef struct
{
	int value;
	
}element;

element queue[SIZE];

int front = -1;
int rear  = -1;

void enqueue(int data)
{
	int counter = 0, i;
	
	if(rear == SIZE -1)
	{
		printf("The element adding is failed.");
		
	}
	else
	{

		if(front == -1) 
		
			front++;
		
			while(queue[counter].value < data && rear != SIZE)
			{
				if (counter < rear)
				 {
					for (i = rear; i >= counter; i--) 
					{
						queue[i+1].value = queue[i].value;
					}
					
					queue[counter].value = data;
					printf("The element has been successfully added.\n");
				}
			}
		
	}
}


void dequeue()
{
	if(front == -1 || front>rear)
	{
		printf("queue is empty");
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
	if(front == -1)
	{
		printf("Queue is empty");
		
	}
	else
	{
		int i;
		for(i=front; i<=rear; i++)
		{
			printf("%d",queue[i].value);
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
		case 3: return 0;	
		}
		
	}
	
	
	
	
	
	return 0;
}
