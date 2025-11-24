
#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
int counter=0;
struct stack
{
	int data;
	struct stack *link;
	
};
struct stack *TOP=NULL;;
void push(int item)
{
	struct stack *newnode;
	newnode=(struct stack * )malloc(sizeof(struct stack));
	newnode->data = item;
	newnode->link = NULL;
	
	
	if (TOP==NULL)
	{
		TOP=newnode;
		counter=counter+1;
	}
	else
	{
		if (counter< maxsize)
		{
			newnode->link=TOP;
			TOP=newnode;
			counter=counter+1;
		}
		else
		{
			printf("Stack is full!!");
		}
	}	
}
void display()
{
	struct stack *ptr;
	ptr=TOP;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		if (ptr->link != NULL)
			printf(" -> ");
		ptr=ptr->link;
		
	}
	
}	
void pop()
{
	struct stack *ptr;
	
	if (TOP!=NULL)
	{
			ptr=TOP;
			printf("poped element is %d\n",ptr->data);
			TOP=TOP->link;
			free(ptr);
	}
	else
	{
		printf("Stack is Empty!!! Deletion is not possible \n");
	}
}
int main()
{
	int choice,item,key;
	do
	{
		printf("\n1.push\n2.pop\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1: printf("Enter the element to push:");
				scanf("%d",&item);
				push(item);				
				break;
			case 2: pop();
				break;				
			case 3: printf("The elemnts in list :");
				display();
				printf("\n");
				break;					
			case 4: break;
			default: printf("Invalid choice!!!Enter the correct choice.\n");
				break;
		}
	}while(choice!=4);
	return (0);
}
