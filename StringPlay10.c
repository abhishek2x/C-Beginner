//
#include <stdio.h>
#include <String.h>

int main()
{
    char a[] = "University";
    char b[] = "university";
    int i, j;
    int d = strcmp(a, b);
    while (a[i] != '\0')
    {
        i++;
    }
    while (a[j] != '\0')
    {
        j++;
    }
    if (i == j)
    {
        while (a[i] != '\0' || b[i] != '\0')
        {
            if (a[i] == b[i])
            {
                d = 0;
            }
            else if(a[i] < b[i])
            {
                d = -1;
            }
            else 
            {
                d-1;
            }
        }
    }
}