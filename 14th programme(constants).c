/*Constants in C*/
/*A constant is a value or variable that cannot be changed in the 
programme */
/*There are two ways to define a constant:
1. "const" keyword
2. "#define" preprocessor*/

// 1st process:

// # include<stdio.h>
// int main()
// {
//     const int a = 12;
//     printf("a = %d",a);
//     /*now, the value of a cannot be changed.*/

// }

/*2nd process*/

# include<stdio.h>
# define PI  3.14 /*(no need to give a semicolon)*/
/*by the preprocessor "#define", we can define a constant*/
int main()
{
    printf("%f",PI);
    
    
    
    
    return 0;



}