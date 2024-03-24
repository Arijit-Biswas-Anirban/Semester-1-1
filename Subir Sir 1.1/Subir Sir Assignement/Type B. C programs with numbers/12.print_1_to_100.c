// print 1-100 without using loops
#include <stdio.h>

int main()
{
    int i = 1;
    
loop:   // label
    printf("%d ", i);
    i++;

    if (i <= 100)
        goto loop;

    return 0;
}
