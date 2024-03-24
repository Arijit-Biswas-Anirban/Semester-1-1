#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* a;
	int n,i,count = 0,space=0;
	
	printf("Enter how many characters you need : ");
	scanf("%d", &n);
	
	a = (char *)malloc(n * sizeof(char));
	getchar();
	gets(a);
	for(i=0;a[i] != '\0';i++)
	{
		if(a[i] == 'A' || a[i] == 'a' || a[i] == 'E' || a[i] == 'e' || a[i] == 'I' || a[i] == 'i' || a[i] == 'O' || a[i] == 'o' || a[i] == 'U' || a[i] == 'u')
		count++;
		if(a[i] == " ")
			space++;
	}
	//printf("Total vowels = %d\n", count);
	printf("Total Consonent = %d", i - count - space);
	
	return 0;
}
