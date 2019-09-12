#include <stdio.h>

int main()
{
    int n, num, index, choice, f = 0, mid;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);

    printf("YOU ENTER %d AS THE SIZE OF THE ARRAY \n", n);
    printf("ENTER %d ELEMENTS IN THE ARRAY \n");

    int arr[n], min = 0, max = n;

    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("ENTER THE ELMENT TO SEARCH : ");
    scanf("%d", &num);

    printf("TO SEARCH THE ELEMENT, PRESS 1 FOR LINEAR SEARCH AND 2 FOR BINARY SEARCH : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        // Linear search
        for (int i = 0; i < n; i++){
            if (arr[i] == num){
                f = 1;
                index = i + 1;
                break;
            }
        }
        if (f == 1)
        printf("ELEMENT FOUND AT INDEX %d", index);
        else
        printf("SORRY NOT FOUND");
        break;

    case 2:
        // Binary Search
        for (int i = min; i < max; i++)
        {
            mid = (min + max) / 2;
            if (arr[mid] > arr[num])
                max = mid - 1;
            if (arr[mid] < arr[num])
                min = mid + 1;
            if (arr[mid] == arr[num])
            {
                index = mid;
                f = 1;
            }
        }
         if (f == 1)
        printf("ELEMENT FOUND ");
        else
        printf("SORRY NOT FOUND");
        break;
    }
    return 0;
}
