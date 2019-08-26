#include <stdio.h>

int main()
{
    int n,m;
    char ch;
    printf("Enter the operator\n");
    scanf("%c", &ch);
    printf("Enter First number\n");
    scanf("%d", &n);
    printf("Enter second number\n");
    scanf("%d", &m);
    switch(ch)
    {
        case '+':
            printf("Sum = %d", n+m);
            break;

        case '-':
            printf("Difference = %d", n-m);
            break;

        case '*':
            printf("Product = %d", n*m);
            break;

        case '/':
            printf("Division = %d", n/m);
            break;

        default:
            printf("Invalid Input\n");
    }
}