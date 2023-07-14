/*Question: Write a programme tha takes an integer input and prints its
multiplication  table from 1 to 10.*/

/*Answer::*/

#include <stdio.h>
int main()
{

    int a = printf("Enter the number 'a' you want the multiplication table of:\n");
    scanf("%d", &a);
    printf("the multiplication table of %d is\n", a);
    printf(" a x 1 = %d\n", a * 1);
    printf(" a x 2 = %d\n", a * 2);
    printf(" a x 3 = %d\n", a * 3);
    printf(" a x 4 = %d\n", a * 4);
    printf(" a x 5 = %d\n", a * 5);
    printf(" a x 6 = %d\n", a * 6);
    printf(" a x 7 = %d\n", a * 7);
    printf(" a x 8 = %d\n", a * 8);
    printf(" a x 9 = %d\n", a * 9);
    printf(" a x 10 = %d\n", a * 10);

    return 0;
}
/*
alternative way:


// 
#include <stdio.h>
int main()
{
    int a = printf("enter the number you want the multiplication table of\n");
    scanf("%d", &a);
    int b;
    b = 0;
    printf("the multiplication table of %d is\n",a);
    while (b <= 10)
    {
        printf("%d\n", a * b);
        b++;
    }

    return 0;
}*/