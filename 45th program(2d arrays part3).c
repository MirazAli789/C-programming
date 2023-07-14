# include<stdio.h>
int main(){
    int typ[2][3];
    printf("enter the values of this array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&typ[i][j]);
        }
        
    }
    printf("the value of this array\n");
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            printf("%d ",typ[k][l]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}