// method 1(using ternary operator):

// #include <stdio.h>
// int main()
// {
//     int a, b, max;
//     a = printf("enter 1st number\n");
//     scanf("%d", &a);
//     b = printf("enter 2nd number\n");
//     scanf("%d", &b);
//     max = (a > b) ? a : b;
//     printf("the largest of these two numbers is %d\n", max);

//     return 0;
// }

// method 2(using if-else):

#include <stdio.h>
int main()
{
    int a, b;
    a = printf("enter number a\n");
    scanf("%d", &a);
    b = printf("enter number b\n");
    scanf("%d", &b);
    printf("number a = %d\n", a);
    printf("number b = %d\n", b);
    if (a > b)
    {
        printf("number a is greater than b\n");
    }
    else
    {
        printf("b is greater than a\n");
    }

    return 0;
}