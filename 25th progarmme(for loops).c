// /*For loops are used to iteriate the statements or a part of the programmes several times*/
// /*basic syntax of a for loop:
// for(expression 1; expression 2; expression 3;){
//     //code to be executed.

// }*/
// // example: 1

// /*#include <stdio.h>
// int main()
// {
//     int i;
//     for ( i = 0; i < 100; i++)//[i++ = "i = i+1"]
//     {
//         printf("%d\n",i);
//     }

//     return 0;
// }*/

// /* we can also initialize two variables inside a for loop*/
// // example 2:
// #include <stdio.h>
// int main()
// {
//     int i, j;
//     for (i = 0, j = 0; i < 10; i++)
//     {
//         printf("%d %d\n", i, j);
//     }

//     return 0;
// }
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0, j = 0; j < 6, i < 4; i++)
    {
        printf("%d %d\n", i, j);
        j++;
    }

    