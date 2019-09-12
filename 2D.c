#include <stdio.h>

int main(){
    int n, choice;
    printf("ENTER SIZE OF THE ARRAY");
    scanf("%d", &n);
    int a[n][n];
    int b[n][n];
    int c[n][n];
    printf("ENTER ELEMENTS IN FIRST ARRAY\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("FIRST ARRAY IS : \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("ENTER ELEMENTS IN SECOND ARRAY\n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("SECOND ARRAY IS : \n\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("ENTER 1 TO PRINT SUM OF TWO ARRAY.\nENTER TWO TO PRINT DIFFERENCE OF TWO ARRAY.\nENTER THREE TO PRINT MULTIPLICATION OF TWO MATRIX \n\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        // Sum of two element of an array
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = a[i][j] + b[i][j];
            }
        }
        break;
    
    case 2:
        // Difference of two element of an array
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                c[i][j] = a[i][j] - b[i][j];
        break;

    case 3:
        // Multiplication of two element of an array
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < n; k++)
                {
                    c[i][j] = c[i][j] + (a[i][k]*b[k][j]);
                }   
            }
        }
        break;
    

    default:
        printf("INVALID CHOICE\n\n");
        break;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
