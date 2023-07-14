#include <stdio.h>
void printstar(int n)
{
    int i;
    n = printf("enter number of stars to print\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    printstar(10);

    return 0;
}