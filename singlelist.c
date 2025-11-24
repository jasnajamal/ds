#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
	
};
struct node *header=NULL;;

/*void createnode(int item)
{
}*/
void insertAtFront(int item)
{
	struct node *newnode;
	newnode=(struct node * )malloc(sizeof(struct node));
	newnode->data = item;
	newnode->link = NULL;
	
	
	if (header==NULL)
	{
		header=newnode;
	}
	else
	{
		newnode->link=header;
		header=newnode;
	}
	
	
}

void insertAtEnd(int item)
{
	struct node *newnode;
	newnode=(struct node * )malloc(sizeof(struct node));
	newnode->data = item;
	newnode->link = NULL;
	
	
	if (header==NULL)
	{
		header=newnode;
	}
	else
	{
		struct node *ptr;
		ptr=header;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=newnode;
	}
	
}



void insertAtAny(int key,int item)
{
	struct node *ptr,*ptr1;
	ptr=ptr1=header;
	while(ptr!=NULL && ptr->data !=key)
	{	
		ptr1=ptr;
		ptr=ptr->link;
	}	
	if (ptr==NULL)
	{
		printf("key not fount,insertion not possible\n");		
	}			
	else
	{
		struct node *newnode;
		newnode=(struct node * )malloc(sizeof(struct node));
		newnode->data = item;
		newnode->link = ptr;
		ptr1->link=newnode;
	}
}

void traverseList()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		if (ptr->link != NULL)
			printf(" -> ");
		ptr=ptr->link;
		
	}
	
}																								


void DeleteAtFront()
{
	struct node *ptr;
	
	if (header!=NULL)
	{
			ptr=header;
			printf("deleted element is %d\n",ptr->data);
			header=header->link;
			free(ptr);
	}
	else
	{
		printf("Empty list!!! Deletion is not possible \n");
	}
}

void DeleteAtEnd()
{
	struct node *ptr,*ptr1;
        ptr=header;
	if (header!=NULL)
	{
		while(ptr->link!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->link;
			
		}
		printf("deleted element is %d\n",ptr->data);
		ptr1->link=NULL;
		free(ptr);
	}
	else
	{
		printf("Deletion is not possible \n");
	}
}

void DeleteAtAny(int key)
{
	struct node *ptr,*ptr1;
        ptr=ptr1=header;
	while(ptr != NULL && ptr->data != key)
	{
		ptr1=ptr;
		ptr=ptr->link;
	}
	if(ptr==NULL)
	{
		printf("key not fount!!Deletion is not possible \n");
	}
	else
	{
		printf("deleted element is %d\n",ptr->data);
		if(ptr1!=NULL)
		{
			ptr1->link=ptr->link;
		}
		else
		{
			header=ptr->link;
			
		}
		free(ptr);
	}
}




int main()
{
	int choice,item,key;
	do
	{
		printf("\n1.insert at front\n2.insert at end\n3.insert at any\n4.delete at front\n5.delete at end\n6.delete at any\n7.Display\n8.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{	
			case 1: printf("Enter the element to insert at front:");
				scanf("%d",&item);
				insertAtFront(item);				
				break;
			case 2: printf("Enter the element to insert at end:");
				scanf("%d",&item);
				insertAtEnd(item);				
				break;
			case 3: printf("Enter the key to insert:");
				scanf("%d",&key);
				printf("Enter the element to insert at any node:");
				scanf("%d",&item);
				insertAtAny(key,item);
				break;				
			case 4: DeleteAtFront();
				break;
			case 5: DeleteAtEnd();
				break;
			case 6: printf("Enter the key to delete:");
				scanf("%d",&key);
				DeleteAtAny(key);
				break;				
			case 7: printf("The elemnts in list :");
				traverseList();
				printf("\n");
				break;					
			case 8: break;
			default: printf("Invalid choice!!!Enter the correct choice.\n");
				break;
		}
	}while(choice!=8);
	return (0);
}
