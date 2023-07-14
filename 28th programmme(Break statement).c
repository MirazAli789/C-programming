#include <stdio.h>
int main()
{
    int i, b;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", i);
        b = printf("enter you age\n");
        scanf("%d", &b);
        if (b > 10)
        {
            break;
        }
    }

    return 0;
}