#include <stdio.h>
#include <string.h>

int main()
{
    char carr[50];

    printf("\nENTER A STRING : ");
    gets(carr);
    printf("ENTERED STRING IS : ");
    puts(carr);
    for (int i = 0; i < strlen(carr); i++)
    {
        printf("%c\n", carr[i]);
    }
    return 0;
}
