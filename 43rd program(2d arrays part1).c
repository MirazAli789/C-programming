#include <stdio.h>
int main()
{
    /*the basic way to initialize a 2d array is
    data_type name_of_array [i][j];*/
    // let us considr an integer array

    int arr[2][3] = {{1, 2, 3},
                    {4, 5, 6}};
    /*we can access any data from the 2d array by he following process.*/
    printf("%d\n", arr[0][1]);
    printf("%d\n", arr[0][2]);
    printf("%d\n", arr[1][0]);

    return 0;
}