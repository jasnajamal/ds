#include<stdio.h>
char uni_set[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}
char set1[26],set2[26],result[26];
int bit_vec1[26],bit_vec2[26];
void initializeSet(char ary[26])
{
	for(int 1=0;i<26;i++)
	{
		bit_vec1[i] = 0;
		bit_vec2[i] = 0;
		result[i] = 0;
	}
}
void bitVector(char ary[])
{
	
}
int main()
{
	int num1,num2,1;
	printf("enter the number of elements in set1: ");
	scanf("%d",&num1);
	printf("enter the set1 elements: ");
	for(1=0;i<num1;i++)
		scanf("%c",&set1[i]);
	printf("enter the number of elements in set2: ");
	scanf("%d",&num2);
	printf("enter the set2 elements: ");
	for(1=0;i<num2;i++)
		scanf("%c",&set2[i]);
}
