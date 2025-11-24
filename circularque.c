#include <stdio.h>
#define maxsize 5
int front = -1, rear = -1, Q[maxsize];
void enqueue(int item)
{
	if ((front == 0 && rear == maxsize - 1) || (rear + 1) % maxsize == front) 
	{
        	printf("The Queue is Full\n");
        	return;
    	}
	if (front == -1) 
	{
        	front = rear = 0;
    	} 
    	else 
    	{
        	rear = (rear + 1) % maxsize;
  	}
        Q[rear] = item;
        printf("%d is Enqueued Successfully\n", item);
}
void dequeue() 
{
	if (front == -1)
	{
		printf("The Queue is Empty\n");
        	return;
	}
    	int item = Q[front];
  	printf("%d is Dequeued Successfully\n", item);
    	if (front == rear) 
    	{
    		front = rear = -1;
    	} 
    	else 
    	{
        	front = (front + 1) % maxsize;
    	}
}
void display()
{
    	if (front == -1) 
    	{
        	printf("The Queue is Empty\n");
                return;
    	}
    	printf("Elements are: ");
    	int i = front;
    	while (1) 
    	{
        	printf("%d ", Q[i]);
        	if (i == rear)
            	break;
        	i = (i + 1) % maxsize;
    	}
    	printf("\n");
}

int main() 
{
    int choice, item;
    do {
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to enqueue: ");
                scanf("%d", &item);
                enqueue(item);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                break;
            default:
                printf("Enter the correct choice.\n");
        }
    } while (choice != 4);

    return 0;
}

