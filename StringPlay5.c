// TO COPY STRING
#include <stdio.h>
#include <String.h>

int main()
{
    char ch1[8] = "ABHISHEK";
    char ch2[8];
    int i;
    for (i = 0; ch1[i]!='\0'; i++)
    {
        ch2[i] = ch1[i];
    }
    ch2[++i] = '\0';
    puts(ch2);    
}

