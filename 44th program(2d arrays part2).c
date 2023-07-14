#include <stdio.h>
int main()
{
    /*IN THIS PROGRAMME WE ARE GOING TO PRINT A 2D ARRAY USING NESTED FOR LOOP.*/

    int arr[2][3] = {{1, 2, 3},
                    {4, 5, 6}};

    for (int i = 0; i < 2; i++) /*this for loop is for row*/
    {
        for (int j = 0; j < 3; j++) /*this for loop is for
                                    coloumn*/
        {
            printf("%d", arr[i][j]);
        }
    }

    return 0;
}