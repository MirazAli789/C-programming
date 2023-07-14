#include <stdio.h>
int main()
{
	int i, j, rows, cols;
	int arr_1[10][10];
	int arr_2[10][10];
	int sum[10][10];
	printf("enter number of rows of the matrices\n");
	scanf("%d", &rows);
	printf("enter number of coloumns of the matrices\n");
	scanf("%d", &cols);
	printf("enter the elements of the first matrix\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			scanf("%d", &arr_1[i][j]);
		}
	}
	printf("enter the elements of the second matrix\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			scanf("%d", & arr_2[i][j]);
		}
	}
	printf("the sum of these two matrix is\n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			sum[i][j] = arr_1[i][j] + arr_2[i][j];
			printf("%d ", sum[i][j]);
		}
		printf("\n");
	}

	return 0;
}