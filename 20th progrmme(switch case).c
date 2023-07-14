/*Switch case statements:*/
/*it is a alternative*/
#include <stdio.h>
int main()
{
    int a = printf("please enter a number\n");
    scanf("%d", &a);
    switch (a)
    {
    case 15:
        printf("you have enetered a number that is 15\n");
        break;

    case 16:
        printf("you have entered a number 16\n");
        break;

    case 20:
        printf("you have entered the number 20\n");
        break;

    default:
        printf("you have entered neither 15,16,20\n");
        break;
    }
    return 0;
}