#include <stdio.h>
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 0;
    else{
        return(n*factorial(n-1));
    }
    }
}
int main()
{

    return 0;
}
