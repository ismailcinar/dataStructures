#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10 //Specifying the maximum limit of the queue

struct stack
{
	int array [SIZE];
	int top;
	
};

struct stack object1;

void push(int number)
{
	
	if(object1.top == SIZE -1)
	{
		printf("stack is full.\n");
	}
	else
	{
		object1.top++;
		object1.array[object1.top] = number;
	}
}

void pop()
{
	if(object1.top == -1)
	{
		printf("stack is empty.\n");
	}
	else
	{
		int num = object1.array[object1.top];
		object1.top--;
		printf("%d removed from the stack.\n",num);
	}
}

void display()
{
	system("cls");
	if(object1.top==-1)
	{
		printf("stack is empty. \n");
	}
	else
	{
		int i;
		for(i=object1.top; i>-1;i--)
		{
			printf("%d\n",object1.array[i]);
		}
	}
}

typedef struct
{
	int value;
	
}element;

element queue[SIZE]; //initiliaze the queue
element queue_two[SIZE];
    int front = -1;
    int rear  = -1;
	int counter = 0;
	int i;
	bool result =false;
	
int enqueue(int data)
{

	if(rear >= SIZE -1) // I check that the queue is full. If queue is full then prints "The element adding is failed".
	{
		printf("The element adding is failed.\n");
		return result;
		
	}
	else 
	{
		if(front==-1) // i check when adding the first element.
		front=0; 
		
		rear++; // I'm increasing the rear because I added it to end.
		queue[rear].value = data; // 
		printf("The element has been successfully added.\n");
		result =true;
		return result;
		
		
	}

	
			
}

void dequeue()
{
	if(front == -1 || front>rear)  // I check that the queue is empty. If queue is empty then prints "Queue is empty".
	{
		printf("Queue is empty.\n");
		front = -1;
		rear  = -1;
	}
	else
	{
		front = front +1; // I'm deleting the first element

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
	int choose,number,j=0,temp[10];
	int length=0;
	
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
		
            if(queue[rear].value<number){
                enqueue(number);
                
            }
		    else
			 {
		        j=0;
		        for(i=rear;0<=i;i--)
				{
		            
		             queue_two[j].value=queue[i].value;
		             j++;
				    dequeue();	
				    
				    }
		               enqueue(number); 
		               

	  
		          for(i=0;i<j;i++)
				  {
		            
		          enqueue( queue_two[i].value);
		          }
		       
		      
		    }
		
		
		break;
		case 2: dequeue();
		break;
		case 3: exit(0);	
		}
		
	}
	
	return 0;
}
