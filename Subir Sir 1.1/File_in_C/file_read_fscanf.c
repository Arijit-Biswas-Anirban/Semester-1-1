#include<stdio.h>
int main()
{
    FILE *file;
    char first_name[50];
    char last_name[50];
    file = fopen("test.txt", "r");
    if(file == NULL)
        printf("File does not exist\n");
    else
    {
        printf("File is opened.\n");
        fscanf(file,"%s %s", &first_name, &last_name);
        printf("%s %s", first_name, last_name);
        printf("File read successfully.\n");
        fclose(file);
    }

    return 0;
}
