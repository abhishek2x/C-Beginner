#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number to print its table\n");
    scanf("%d", &n);
    int d = n;
    for (int i = 1; i <= 10; i++)
    {
        d = n * i;
        printf(" %d * %d = %d\n", n, i ,d);
    }
    return 0;
}