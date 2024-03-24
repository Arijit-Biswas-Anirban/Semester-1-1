#include <stdio.h>
int main()
{
	int arr1[5],arr2[5],temp[5],i,j;
	printf("Enter 1st array : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter 2nd array : \n");
	for(j=0;j<5;j++)
	{
		scanf("%d", &arr2[j]);
	}
	printf("Before swapping : \n");
	printf("1st array: \n");
	for(i=0;i<5;i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n2nd array: \n");
	for(j=0;j<5;j++)
	{
		printf("%d ", arr2[j]);
	}
	printf("\n");	
	
	for(i=0;i<5;i++)
	{
		temp[i] = arr1[i];
	}
	for(i=0;i<5;i++)
	{
		arr1[i] = arr2[i];
	}
	for(i=0;i<5;i++)
	{
		arr2[i] = temp[i];
	}
	printf("After swapping : \n");
	printf("1st array: \n");
	for(i=0;i<5;i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n2nd array: \n");
	for(j=0;j<5;j++)
	{
		printf("%d ", arr2[j]);
	}
	return 0;
}