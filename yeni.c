
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h> 
#define MAX 100 

typedef struct Queue
{
    int capacity;
    int size;
    int front;
    int rear;
    int **elements;
}Queue;


Queue * createQueue(int maxElements)
{
    Queue *Q;
    Q = (Queue *)malloc(sizeof(Queue));
    Q->elements = (int**)malloc(sizeof(int*)*maxElements);
    Q->size = 0;
    Q->capacity = maxElements;
    Q->front = 0;
    Q->rear = -1;
    return Q;
}
void Enqueue(Queue *Q , int *element) {
    if (Q->size == Q->capacity) {
        printf("Sýra Dolu\n");
        return;
    }
	else {
        Q->size++;
        Q->rear = Q->rear + 1;
        if (Q->rear == Q->capacity) {
            Q->rear = 0;
        }
        Q->elements[Q->rear] = (int *) malloc((sizeof element + 1) * sizeof(int));
        strcpy(Q->elements[Q->rear], element);
    }
    return;
}
void Dequeue(Queue *Q)
{
    if(Q->size!=0)
    {
        Q->size--;
        Q->front++;
        
        if(Q->front==Q->capacity)
        {
            Q->front=0;
        }
    }
    return;
}

int* peek(Queue *Q)
{
    if(Q->size!=0)
    {
        return Q->elements[Q->front];
    }
    return NULL;
}

typedef struct Stack
{
    int capacity;
    int size;
    int top;
    int **elements;
}Stack;

Stack * createStack(int maxElements)
{
    
    Stack *S;
    S = (Stack *)malloc(sizeof(Stack));
    S->elements = (int**)malloc(sizeof(int*)*maxElements);
    S->size = 0;
    S->capacity = maxElements;
   	S->top = -1;
    
    return S;
}
void Push(Stack *S , int *element) {
   
    if (S->size == S->capacity) {
        printf("Sýra Dolu\n");
    } else {
        S->size++;
        S->top = S->top + 1;
        if (S->top == S->capacity) {
            S->top = 0;
        }
        S->elements[S->top] = (int *) malloc((sizeof element + 1) * sizeof(int));
        strcpy(S->elements[S->top], element);
    }
    return;
}
int* Pop(Stack *S)
{
    if(S->top == -1) {
    	return "-1";
	}
    else {
    	return S->elements[S->top--];
	}
    
	
}
bool IsEmpty(Stack *S) {
	if(S->top == -1) {
		return true;
	}
	else {
		return false;
	}
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
