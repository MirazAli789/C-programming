// /*Exercise 2: write a programme to give gifts for passing exams*/
// /*Rules:
// those whao have passed "maths and science" : 45p
// those whao have passed "science": 15p
// those whao have passed "maths": 15p*/

// /*solution*/
// #include <stdio.h>
// int main()
// {

//     char a[20];
//     char math[20];
//     char science[20];
//     char math_and_science[20];
//     printf("enter the exam you have passed?\n");
//     scanf("%s\n",a);
//     if(a==math){
//         printf("congrats you have got 15 points\n");
//     }
//     else if(a == science){
//         printf("congrats you have got 15 points\n");
//     }
//     else if (a == math_and_science){
//         printf("congrats you have got 45 points\n");
//     }




//     return 0;    


// }


# include<stdio.h>
# include<string.h>
int main(){
    char a[20];
    printf("enter the exam you have passed\n");
    scanf("%s",a);

    if(strcmp(a,"math")){
        printf("congrats you have got 15 points\n");
    }

    else if(strcmp(a,"science")){
        printf("congarts you have got 15 points\n");
    }
    else if (strcmp(a,"math and science"))
    {
        printf("congarts you have got 45 points\n");
    }
    else{
        printf("invalid input");
    }
    return 0;
}



