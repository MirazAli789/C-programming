// #include <stdio.h>

// int main()
// {
//     int arr[5];
//     printf("Enter 5 integer values:\n");

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     printf("The array is: ");
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d\n ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }
#include <stdio.h>
int main()
{
    int i, j, rows, cols;
    int arr_1[10][10];
    printf("enter the number of rows of the array\n");
    scanf("%d", &rows);
    printf("enter the number of coloumns of the array\n");
    scanf("%d", &cols);
    printf("enter the elements of the array\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &arr_1[i][j]);
        }
    }
    printf("the array is\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", arr_1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
