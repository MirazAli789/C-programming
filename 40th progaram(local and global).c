#include <stdio.h>
int global = 34;/*here we are creating a global variable(global)*/
int main()
{
    global = 89;/*but if we change the variable of the variable & make it a local variable then the local variable will take precedense*/
    printf("the value of global variable is = %d",global);
    

    return 0;
}