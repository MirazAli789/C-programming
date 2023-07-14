/*pointers are user defined variables which store the address of another variable*/

#include <stdio.h>
int main()
{
    int a = 4;
    int *p = &a;
    printf("address of a = %p\n", p);
    printf("value of a = %d\n", *p);
    printf("address of pointer p is =%p\n", &p);

    /*pointer that points another pointer*/
    int **q;
    q = &p;
    printf("the address of p is\n");
    printf("%p\n", q);
    return 0;
}