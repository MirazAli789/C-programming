#include <stdio.h>
int takevalue()
{
    int i = printf("enter a number\n");
    scanf("%d", &i);
    return i;
}
int main()
{
    int a;

    a = takevalue();
    printf("entered number is = %d", a);

    return 0;
}