#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* a;
	int n,i;
	
	printf("Enter how many characters you need : ");
	scanf("%d", &n);
	
	a = (char *)malloc(n * sizeof(char));
	getchar();
	gets(a);
	
	for(i=0;a[i] != '\0';i++)
	{
		if(a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = a[i] + ('a' - 'A');
		}
	}
	printf("After converting to lower case : \n");
	puts(a);
	
	return 0;
}
