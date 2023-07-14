#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 100)
    {

        int a;
        a = printf("enter a number\n");
        scanf("%d", &a);
        if (a % 2 != 0)
        {
            printf("it is a prime number\n");
        }
        else
        {
            printf("the number is not a prime number\n");
        }
        
        i++;
    }
    return 0;
}