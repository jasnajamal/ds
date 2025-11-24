
#include<stdio.h>
#define maxsize 5
int front=-1,rear=-1,Q[maxsize];
void enqueue(int item)
{
	  if(rear==maxsize-1)
	  	printf("The Queue is Full\n");
	  else
	  {
	  	if(front==-1)
	  		front=0;
	  	rear=rear+1;
	  	Q[rear]=item;
	  	printf("%d is Enqueued Successfully\n");
	  }
}
void dequeue( )
{
	if (front==-1 || front>rear)
	{
		printf("The Queue is Empty\n");
		return;
	}	
	else
	{
		int item=Q[front];
		printf("%d is Enqueued Successfully\n",item);
		if(front>rear)
			front=rear=-1;
		else
			front=front+1;
	}
}
void display()
{
 	printf("elements are:");
	for(int i=front;i<=rear;i++)
		printf("%d ",Q[i]);
	printf("\n");
}

int main()
{
	int choice,item;
	do
	{
		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1: printf("enter the element to enqueue:");
				scanf("%d",&item);
				enqueue(item);				
				break;
			case 2: dequeue();
				break;
			case 3: display();
				break;
			case 4: break;
			default: printf("enter the correct choice.\n");
		}
	}while(choice!=4);
	return (0);
}
