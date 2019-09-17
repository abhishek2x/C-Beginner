// concatination
#include <stdio.h>
#include <String.h>

int main()
{
    char arr[] = "HELLO WORLD";
    char arr1[] = "GOOD MORNING";
    strcat(arr1, arr);

    printf("%s\n", arr1);
    printf("%s\n", arr);
}