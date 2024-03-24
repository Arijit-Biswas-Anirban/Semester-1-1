#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("student.txt", "w");
    char name[40],ch,re;
    int age,number,num;
    if(file == NULL)
        printf("File does not exist,\n");
    else
    {
        printf("File is opened.\n");

        printf("Enter number of students: ");
        scanf("%d", &num);
        while(num--)
        {
            scanf("%c", &ch);
            printf("Enter name: ");
            gets(name);
            printf("Enter age: ");
            scanf("%d", &age);
            printf("Enter number: ");
            scanf("%d", &number);
            fprintf(file,"Name = %s Age = %d Number = %d\n", name, age, number);
        }
        printf("File is written successfully.\n");
        fclose(file);
    }
    FILE *read;
    read = fopen("student.txt", "r");

    if(read == NULL)
        printf("File does not exist.\n");
    else
    {
        printf("File opened.\n");

        while(!feof(read))
        {
            re = fgetc(read);
            printf("%c", re);
        }
        printf("File read successfully.\n");
        fclose(read);
    }
    return 0;
}
