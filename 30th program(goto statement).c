#include <stdio.h>
int main()
{
    label:
        printf("hello");
        printf("hi");

    end:
        printf("good bye");
        

    goto label;
    return 0;
}