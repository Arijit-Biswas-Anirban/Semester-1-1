
#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    gets(name);
    int i,len=0;
    for(i=0;name[i]!='\0';i++)
        len++;
    file = fopen("test.txt", "w");
    if(file == NULL)
        printf("File does not exist\n");
    else
    {
        printf("File is opened.\n");
        for(i=0;i<len;i++)
        {
            fputc(name[i],file);
        }
        printf("File is writtten successfully.\n");
        fclose(file);
    }

    return 0;
}
