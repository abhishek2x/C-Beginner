#include <stdio.h>

int main()
{
    int n ;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if(i==0 || j==0 || i==n )
            printf("$\t");
        }
        printf("\n");
    }
    return 0;
}