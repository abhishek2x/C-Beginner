//Length of a string
#include <stdio.h>
int main()
{
    char s[1000];
    int i;
    printf("Enter a string: ");
    gets(s);
    for(i = 0; s[i] != '\0'; ++i);
    printf("Length of string: %d", i);
    return 0;
}