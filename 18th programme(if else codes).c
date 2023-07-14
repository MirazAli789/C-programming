# include<stdio.h>
int main(){

    int a = printf("enter your age\n");
    scanf("%d",&a);
    printf("your age is : %d\n",a);
    if (a>=18)
    {
        printf("You can drive!\n");
    }
    

    /*if the user inputs the age (a<18) , the code will skip the if statement as the condition is false. */
    

    /*now putting the else-if condition*/
    else if(a<=12){
        printf("how can you even think of driving!!\n");



    }

    else if(a>=13){
        printf("you are a teenager, you still cannot drive!\n");

    }

    

    /*now we are putting the else satement */
    else{
        printf("you cannot drive\n");

    }
    
    return 0;

}