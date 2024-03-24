#include <stdio.h>
#define Size 8
int main()
{
	int arr[Size] = {2,5,6,5,2,7,8,7},i,j,k;
	int size = 8;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i] == arr[j]){
			for(k=j;k<size;k++)
			{
				arr[k] = arr[k+1];
			}
				j--;
				size--;
			}
		}
	}
	
	for(i=0;i<size;i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
