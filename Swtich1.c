#include <stdio.h>

int main()
{
    int choice;
    printf("Enter your choice\n");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1: 
        printf("This is case 1\n");
        break;
    case 2:
        printf("This is case 2\n");
        break;
    default:
        printf("Invalid Input\n");
    }
}
