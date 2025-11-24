#include<stdio.h>
int main()
{
	int i,n,arr[50],sum=0;
	printf("Enter the Size of Array:");
	scanf("%d",&n);
	if (n>=50)
	{	
		printf("Error!!! Out of the Limit!!!");
	}
	else
	{
		printf("Enter the Values for Array:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=sum+arr[i];
		}
		printf("The Sum of %d Numbers are %d\n",n,sum);
	}
	return (0);
	
}		

