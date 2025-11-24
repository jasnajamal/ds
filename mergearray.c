#include<stdio.h>
void display(int arr[],int size)
{
	printf("Array Elements:"); 
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
}

void sort(int arr[],int sze)
{
	int temp,i,j;
	for(i=0;i<sze;i++)
	{
		for(j=i+1;j<sze;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void merge(int arr1[],int arr2[],int arr3[],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		arr3[i]=arr1[i];
	}
	for(j=0;j<m;j++)
	{
		arr3[i]=arr2[j];
		i=i+1;
	}
}

int main()
{
	int i,n,m,arr1[100],arr2[100],arr3[200],size;
	
	printf("enter the size of first array:");
	scanf("%d",&n);
	if (n>=100)
	{	
		printf("error!!! out of the limit!!!\n");
	}
	else
	{
		printf("enter the values for first array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr1[i]);
		}
		display(arr1,n);
	}
	printf("enter the size of second array:");
	scanf("%d",&m);
	if (m>=100)
	{	
		printf("error!!! out of the limit!!!\n");
	}
	else
	{
		printf("enter the values for second array:");
		for(i=0;i<m;i++)
		{
			scanf("%d",&arr2[i]);
		}
		display(arr2,m);
	
	}
	printf("sorted first array\n");
	sort(arr1,n);
	display(arr1,n);
	printf("sorted second array\n");
	sort(arr2,m);
	display(arr2,m);
	size=n+m;
	printf("merged array\n");
	merge(arr1,arr2,arr3,n,m);
	sort(arr3,size);
	display(arr3,size);	
	return (0);	
}		











