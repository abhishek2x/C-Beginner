//
#include <stdio.h>
#include <stdio.h>

int main()
{
    char ch1[100];
    char ch2[100];
    char ch3[100];
    printf("ENTER FIRST STRING\n");
    gets(ch1);
    printf("ENTER SECOND STRING\n");
    gets(ch2);
    puts(strcat(ch1,ch2));
    return 0;
}