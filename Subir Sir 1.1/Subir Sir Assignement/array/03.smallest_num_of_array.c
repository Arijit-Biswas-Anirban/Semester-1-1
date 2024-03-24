#include <stdio.h>
#define size 3
int main()
{
	int arr[size];
	printf("Enter the array elements : ");
	
	for(int i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int min;
	min = arr[0];
	for(int i=1;i<size;i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	printf("Min = %d\n", min);
	
	
	return 0;
}
