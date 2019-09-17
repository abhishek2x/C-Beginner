// Reversing without library func.
#include <stdio.h>
#include <String.h>

int main()
{
    char arr[11] = "Library";
    char c;
    int i = 0,j;
    while (arr[i]!='\0')
    {
        i++;
    }
    i--;
    int p = i/2;
    for ( j = 0; j <= p; j++)
    {
        c = arr[j];
        arr[j] = arr[i];
        arr[i] = c;
        i--;
    }
    printf("%s\n", arr);       
}

