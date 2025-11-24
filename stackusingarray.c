#include<stdio.h>
#define maxsize 3
int top=-1,s[maxsize];
void push(int item)
{
	if(top>=maxsize)
	{
		printf("stack is full\n");
	}
	else
	{
		top=top+1;
		s[top]=item;
		printf("%d is pushed successfully\n",item);
	}
}
void pop()
{
	if(top<0)
	{
		printf("stack is empty\n");
	
	}	
	else
	{
		printf("the poped element is %d \n",s[top]);
		top=top-1;		
	}
}
void display()
{
 	printf("elements are:");
	for(int i=top;i>=0;i--)
	{
		printf("%d ",s[i]);
	}
	printf("\n");
	
}
int main()
{
	int choice,item;
	do
	{
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1: printf("enter the element to push:");
				scanf("%d",&item);
				push(item);
				break;
			case 2: pop();
				break;
			case 3: display();
				break;
			case 4: break;
			default: printf("enter the correct choice.\n");
				
		}
	}while(choice!=4);
	return (0);
}
