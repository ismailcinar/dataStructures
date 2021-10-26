#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
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
int main()
{
	
	object1.top = -1;
	int choise,number;
	
while(1)
{
		printf("Stack \n");
	printf("1--- push \n");
	printf("2--- pop \n");
	printf("3--- display \n");
	printf("0--- exit \n");
	printf("Make your choise  push \n");
	scanf("%d",&choise);
	
	switch(choise)
	{
		case 1: printf("Please push a number:");
		scanf("%d",&number);
		push(number);
		break;
		case 2: printf("Please pop a number:");
		scanf("%d",&number);
		pop();
		case 3: display();
		break;
		case 0: exit(0);
		
	}
}
return 0;

}
