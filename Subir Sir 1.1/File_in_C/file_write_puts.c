#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "a");
    char name[50];
    if(file == NULL)
        printf("File does not exist\n");
    else
    {
        printf("File is opened.\n");
        printf("Enter your name: ");
        gets(name);
        fputs(name,file);
        fputs("\n",file);
        printf("File is written successfully.\n");
        fclose(file);
    }



    return 0;
}
