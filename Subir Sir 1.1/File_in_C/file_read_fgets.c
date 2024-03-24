#include<stdio.h>
int main()
{
    FILE *file;
    char ch[50];
    file = fopen("test.txt", "r");
    if(file == NULL)
        printf("File does not exist\n");
    else
    {
        printf("File is opened.\n");
        while(!feof(file))
        {
            fgets(ch,5,file);
            puts(ch);
        }
        printf("File read successfully.\n");
        fclose(file);
    }

    return 0;
}
