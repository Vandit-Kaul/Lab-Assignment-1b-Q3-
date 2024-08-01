#include <stdio.h>

int main()
{
    int m, n;
    printf("Enter value of m:");
    printf("\n");
    scanf("%d", &m);
    printf("Enter value of n:");
    printf("\n");
    scanf("%d", &n);

    int arr[m][n];
    printf("Enter value in matrix:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int transpose[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    printf("The transposed array is:");
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
            ;
        }
        printf("\n");
    }
}
