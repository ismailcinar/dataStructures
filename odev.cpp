#include <stdio.h>
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
	if(rear == SIZE -1)
	{
		printf("the adding is failed");
		
	}
	else
	{
		if(front == -1)
		{
			front =0;
			
			rear++;
			queue[rear]=data;
			printf("succesfly adde.");
		}
	}
}


void dequeue()
{
	if(front == -1 || front>rear)
	{
		printf("queuue is empty");
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
			printf("%d",queue[i]);
		}
	}
}

int main()
{
	int choose,number;
	
	while(1)
	{
		printf("------OPTIONS-------");
		printf("0- Print all elements of the queue");
		printf("1- Add an element into the queue");
		printf("2- Remove an element from the dequeu");
		printf("3- Exit");
		printf("Select(0-3)? ");
		switch(choose);
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
	
	
	
	
	
	return 0;
}
