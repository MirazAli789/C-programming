/*this code uses a function to find the factorial of an entered number.*/

#include <stdio.h>
int fac()
{
    int num, fact, count;
    fact = 1;
    printf("enter a number\n");
    scanf("%d", &num);
    for (count = 1; count <= num; count++)
    {
        fact = fact * count;
    }
    printf("the factorial of %d is %d", num, fact);
    return fact;
}
int main()
{
    fac();
    return 0;
}


