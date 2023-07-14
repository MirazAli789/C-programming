/*Format specifier is a way to tell the compiler what type of data is
in a variable.*/
/*Such as "%d", "%f" etc*/
/*Format specifiers:
** '%c' : for printing character
** "%d" : for printing integers
** "%f : for printing floats
** "%l" : for printing long integrs
** "%lf" : for printing doubles
** "Lf" : for printing long doubles */

/*Example:*/

# include<stdio.h>
int main()
{
    int a = 4;
    float b = 5.32;
    printf("the value of a is %d\n", a);
    printf("the value of b is %f\n",b);
    printf("the value of b is %8.6f\n",b);
    printf("the value of b is %-18.6f\n",b);
    return 0;
}
