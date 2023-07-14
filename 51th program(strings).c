// // # include<stdio.h>
// // int main()
// // {
// //     /*in c language, strings are not considered a s a datatype, but they are represented by an array of characters which ends with a null character.*/

// //     // char name[6] = {'h','e','l','l','o','\0'};
// //     // printf("the string is\n");
// //     // for (int i = 0; i <6; i++)
// //     // {
// //     //     // printf("%c",name[i]);
// //     // }
// //     // /*another process of representing a string.*/
// //     // char p[6] = "hello";
// //     // printf("%s",p);
// //     char str[90];
// //     printf("enter your name\n");
// //     gets(str);
// //     // printf("good evening %s\n",str);
// //     puts(str);
// //     return 0;
// // }

// // # include<stdio.h>
// // # include<string.h>
// // int main()
// // {
// //     /*functions in string.h library*/
// //     /*strcat() ==> it is used to join two strings*/
// //     // str_1[10] = "hello";
// //     // str_2[10] = "world";
// //     // strcat("hello","world");
// //     // printf("%s",strcat("hello","world"));
// //     /*strrev ==> it is used to reverse a string.*/
// //     // str[10] = "harry";
// //     // char str[10] = "harry";
// //     // printf("%s",strrev(str));
// //     char v[10] = "aliah";
// //     printf("%s",v);
// //     return 0;
// // }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[10];
//     printf("enter the string\n");
//     gets(str);
//     // printf("the string is %s \n",str);
//     printf("the length of this string is %d\n",strlen(str));
//     // if (strcmp(str,'miraz'))
//     // {
//     //     printf("you are right");
//     // }
//     printf("the string is");
//     printf("%s",strrev(str));
//     return 0;
// }

// functions in string.h libray ==> strlen(),strcat(),strcmp(),strrev(),strcpy()
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char a[25] = "hello";
//     int i = strlen(a);
//     printf("the length of the string is %d", i);

//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char target[] = "miraz";
//     char source[] = "ali";

//     strcat(target,source);
//     printf("%s",target);
//     return 0;
// // }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char target[] = "syed";
//     char source[] = "ali";
//     strcat(target,source);
//     printf("%s ",target);
//     printf("\n");

//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char source[] = "miraz";
//     char target[20];
//     strcpy(target,source);
//     printf("the target string is = %s\n",target);
//     printf("the source string is = %s\n",source);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char target[] = "miraz";
//     char source[] = "miraz";
//     int i = strcmp(target,source);
//     printf("%d\n",i);
//     return 0;
// }
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char c[] = "hello";
//     int i = strcmp(c,"hello");
//     printf("%d",i);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char c[] = "printf";
    char d[20] = "print";
    int i = strcmp(d,c);
    printf("the return value is %d",i);
    

    return 0;
}
