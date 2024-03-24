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
		if(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - ('a' - 'A');
		}
	}
	printf("After converting to upper case : \n");
	puts(a);
	
	return 0;
}
