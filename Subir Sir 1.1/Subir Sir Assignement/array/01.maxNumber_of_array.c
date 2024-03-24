#include <stdio.h>
#define size 5
int main()
{
	int arr[size];
	printf("Enter the array elements : ");
	
	for(int i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int max, max_2;
	max = arr[0];
	for(int i=1;i<size;)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
		else
		{
			i++;
		}
	}
	printf("Max = %d\n", max);
	return 0;
}