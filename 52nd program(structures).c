/*structures are the collection of disimilar datatype.*/
// there are two ways of defining a structure

// method 1:

// # include<stdio.h>
// struct student
// {
//     int id;
//     int marks;
//     char name;
// };

// int main()
// {
//     struct student a,b,c;
//     a.id = 1;
//     b.id = 2;
//     c.id = 3;
//     a.marks = 10;
//     b.marks = 12;
//     c.marks = 13;
//     printf("a got %d marks\n",a.marks);
//     printf("b got %d marks\n",b.marks);
//     printf("c got %d marks",c.marks);
//     return 0;
// }

// method 2:
#include <stdio.h>
#include <string.h>
struct student
{

    int roll;
    int marks;
} a, b, c;

int main()
{
    a.roll = 1;
    b.roll = 2;
    c.roll = 3;
    a.marks = 19;
    b.marks = 17;
    c.marks = 20;

    int o = 0;
    while (o < 100)
    {

        int i = printf("enter 1 for a, 2 for b, 3 for c.\n");
        scanf("%d", &i);
        if (i == 1)
        {
            printf("data of a:\n");
            printf("roll = %d\n", a.roll);
            printf("marks = %d\n", a.marks);
        }
        else if (i == 2)
        {
            printf("data of b:\n");
            printf("roll = %d\n", b.roll);
            printf("marks = %d\n", b.marks);
        }
        else if (i == 3)
        {
            printf("data of c:\n");
            printf("roll = %d\n", c.roll);
            printf("marks = %d\n", c.marks);
        }

        o++;
    }
    return 0;
}