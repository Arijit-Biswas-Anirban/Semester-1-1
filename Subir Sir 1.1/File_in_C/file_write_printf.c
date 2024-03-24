#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt", "a");
    char name[50];
    int age;
    if(file == NULL)
        printf("File does not exist\n");
    else
    {
        printf("File is opened.\n");
        printf("Enter your name: ");
        gets(name);
        printf("Enter your age: ");
        scanf("%d", &age);

        fprintf(file, "Name = %s Age = %d\n", name, age);


        printf("File is written successfully.\n");
        fclose(file);
    }



    return 0;
}
