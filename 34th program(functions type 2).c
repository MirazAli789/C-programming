/*in this type of function, there is argument but no return value.*/

#include <stdio.h>
void printstar(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%c", '*');
    }
}
int main()
{
    printstar(14);

    return 0;
}