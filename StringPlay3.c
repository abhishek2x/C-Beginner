//TO FIND LENGTH OF A STRING USING WHILE LOOP
#include <stdio.h>
#include <stdio.h>

int main()
{
    int ch[100];
    int i = 0;
    printf("ENTER A STRING : ");
    gets(ch);
    while(ch[i]!='\0')
    {
        i++;
    }
    printf("LENGTH = %d", i);
}