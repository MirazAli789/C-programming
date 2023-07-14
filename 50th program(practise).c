// # include<stdio.h>
// void message();/*declaration*/
// int main()
// {
//     message();
//     return 0;
// }
// void message(){           /*defination*/
//     printf("every human will die one day\n");
// }

// # include<stdio.h>
// void italy();
// void france();
// void germany();
// int main()
// {
//     printf("i am in main\n");
//     italy();
//     printf("finally i am back in main\n");
//     return 0;
// }
// void italy(){
//     printf("I am in italy\n");
//     france();
// }
// void france(){
//     printf("I am in france\n");
//     germany();
// }
// void germany(){
//     printf("I am in germany\n");
// }

// #include <stdio.h>
// void message();

// int main()
// {
//     message();
//     return 0;
// }

// void message()
// {
//     printf("hello\n");
//     main();
// }

// #include <stdio.h>
// int sum()
// {
//     int a,b,c;
//     printf("enter three numbers\n");
//     scanf("%d %d %d", &a, &b, &c);
//     int d = a + b + c;
//     return d;
// }
// int main()
// {
//     int e = sum();
//     printf("the sum of these three numbers is %d\n", e);
//     return 0;
// }

// # include<stdio.h>
// int sum(int a, int b){
//     int d = a+b;
//     return d;
// }
// int main()
// {
//     int c = sum(4,5);
//     printf("the sum is %d",c);
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     int num, count, fact;
//     printf("enter a number\n");
//     scanf("%d", &num);
//     fact = 1;
//     for (count = 1; count <= num; count++)
//     {
//         fact = fact * count;
//     }
//     printf("the factorial of %d is %d", num, fact);

//     return 0;
// }
// # include<stdio.h>
// int main()
// {
//     int a;
//     printf("enter a number\n");
//     scanf("%d",&a);
//     if(a%2 == 0){
//         printf("the number %d is even\n",a);
//     }
//     else{
//         printf("the number %d is odd",a);
//     }
//     return 0;
// }
// #include <stdio.h>
// int main()
// {
//     char c;
//     c = printf("enter a character\n");
//     scanf("%c", &c);
//     switch (c)
//     {
//     case 'a':
//         printf("%c is a vowel\n", c);
//             break;
//     case 'e':
//         printf("%c is a vowel\n", c);
//             break;
//     case 'i':
//         printf("%c is a vowel\n", c);
//         break;
//     case 'o':
//         printf("%c is a vowel\n", c);
//             break;
//     case 'u':
//         printf("%c is a vowel\n", c);
//             break;
//     default:
//         printf("enetered character is a consonant\n");
//             break;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a, b;
//     printf("enter two numbers\n");
//     scanf("%d %d ", &a, &b);
//     if (a == b)
//     {
//         printf("%d and %d are equal\n", a, b);
//     }
//     else
//     {
//         printf("%d and %d are not equal\n", a, b);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = printf("enter a number\n");
//     scanf("%d", &a);
//     int b = printf("enter another number\n");
//     scanf("%d", &b);
//     int c = printf("enter another number\n");
//     scanf("%d", &c);

//     if (a > b && a > c)
//     {
//         printf("%d is greater than %d and %d", a, b, c);
//     }
//     else if (b > a && b > c)
//     {
//         printf("%d is greater than %d and %d", b, a, c);
//     }
//     else
//     {
//         printf("%d is greater than %d and %d", c, b, a);
//     }

//     return 0;
// }
// # include<stdio.h>
// int main()
// {
//     int a = printf("enter a year\n");
//     scanf("%d",&a);
//     if (a%4 == 0)
//     {
//         printf("the year %d is leap year\n",a);
//     }
//     else{
//         printf("the year %d is not a leap year\n",a);
//     }

//     return 0;
// }

// factorial**

// #include <stdio.h>
// int main()
// {
//     int count, fact, num;
//     fact = 1;
//     printf("enter a number\n");
//     scanf("%d", &num);
//     for (count = 1; count <= num; count++)
//     {
//         fact = fact * count;
//     }
//     printf("the factorial of %d is %d", num, fact);

//     return 0;
// }

// factorial using funtion

// #include <stdio.h>
// void factorial()
// {
//     int num, count, fact;
//     fact = 1;
//     printf("enter a number\n");
//     scanf("%d", &num);
//     for (count = 1; count <= num; count++)
//     {
//         fact = fact * count;
//     }
//     printf("the factorial of %d is %d", num, fact);
// }
// int main()
// {
//     factorial();
//     return 0;
// }

// matrix addition

// #include <stdio.h>
// int main()
// {
//     int i, j, rows, cols;
//     int arr_1[10][10];
//     int arr_2[10][10];
//     int sum[10][10];

//     printf("enter the number of rows of the matrices\n");
//     scanf("%d", &rows);
//     printf("enter the number of coloumns of the matrices\n");
//     scanf("%d", &cols);
//     printf("enter the elements of the first matrix\n");
//     for (i = 0; i < rows; i++)
//     {
//         for (j = 0; j < cols; j++)
//         {
//             scanf("%d", & arr_1[i][j]);
//         }
//     }
//     printf("enter the elements of the second matrix\n");
//     for (i = 0; i < rows; i++)
//     {
//         for (j = 0; j < cols; j++)
//         {
//             scanf("%d", &arr_2[i][j]);
//         }
//     }
//     printf("the sum of these two matrix is\n");
//     for (i = 0; i < rows; i++)
//     {
//         for (j = 0; j < cols; j++)
//         {
//             sum[i][j] = arr_1[i][j] + arr_2[i][j];
//             printf("%d ", sum[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
// # include<stdio.h>
// # include <string.h>
// int main()
// {
//     // char c[10] = {'m','i','r','a','z','\0'};
//     // char c[6] = "miraz";
//     // for (int i = 0; i<5; i++)
//     // {
//     //     printf("%c",c[i]);
//     // }

//     // printf("%s",c);

//     // printf("%s",strcat("hello","world"));
//     char c = "miraz";
//     char d = "ali";
//     char e = strcat(c,d);
//     printf("%s",e);
//     return 0;
// }

// # include<stdio.h>
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     printf("the array is\n");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n",arr[i]);
//     }

//     return 0;
// }

// # include<stdio.h>
// int main()
// {
//     int a[5];
//     printf("enter the elements of this array\n");
//     for (int i = 0; i < 4; i++)
//     {
//         scanf("%d\n",&a[i]);
//     }
//     printf("the entered array is\n");
//     for (int j = 0; j < 4; j++)
//     {
//         printf("%d",a[j]);
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a[2][3];
//     printf("enter the elements of the array\n");
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("the array is\n");
//     for (int k = 0; k < 2; k++)
//     {
//         for (int l = 0; l < 3; l++)
//         {
//             printf("%d\n", a[k][l]);
//         }
//     }

//     return 0;
// }

