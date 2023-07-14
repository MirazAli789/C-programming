#include <stdio.h>
int main()
{
    /*at first we are making an array of integers which has a size of 10;*/
    int arr[10];
    arr[1] = 0;
    arr[2] = 1;
    arr[3] = 2;
    arr[4] = 3;
    arr[5] = 4;
    arr[6] = 5;
    arr[7] = 6;
    arr[8] = 7;
    arr[9] = 8;
    arr[10] = 9;
    /*also we can write like this way :
    arr[10] = {0,1,2,3,4,5,6,7,8,9}*/
    /*we can access the datas in the array one by one */
    printf("%d\n", arr[1]);

    /*if we have to print the whole array we have to use a for loop*/
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}