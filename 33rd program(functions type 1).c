/*Functions are used to divide a large c program into samller pieces.
*We can avoid rewriting same logic by using functions.*/

/*this is an example of function that has both arguments and return value. */

#include <stdio.h>
int sum(int a, int b) /*(here the sum is the function that adds the two integers)*/
{
    return a + b;
}

int main()

{
    int a, b, c;
    a = 56;
    b = 97;
    c = sum(a, b);
    printf("the sum of a and b is= %d\n", c);

    return 0;
}