/*Make a programme that takes an integer input(number) from the user and checks the number whether it is even or odd.*/
#include <stdio.h>
int main()
{
    int a = printf("enter a number\n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the number is an even number.\n");
    }
    else if (a % 2 != 0)
    {
        printf("the number is an odd number");
    }

    return 0;
}