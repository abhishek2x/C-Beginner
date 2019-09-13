//strlen
//strcpy
//strcmp
//strlwr
//strupr
//strcat
//strev
#include <stdio.h>
#include <string.h>

int main()
{
    char ch[50];
    printf("ENTER A STRING\n");
    gets(ch);
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U' || ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
        printf("%c", ch[i]);
    }
}
