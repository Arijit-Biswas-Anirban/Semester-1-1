#include <stdio.h>
int main()
{
	int arr[3][3],i,j,sum=0;
	printf("Enter a Matrix: ");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i] == arr[j])
			{
				sum += arr[i][j];
			}
		}
	}
	printf("Sum of diagonal = %d\n", sum);
	return 0;
}
