#include <stdio.h>

int main()
{
    int n, num, index = 0, choice, f = 0, mid;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);

    printf("YOU ENTER %d AS THE SIZE OF THE ARRAY \n", n);
    printf("ENTER %d ELEMENTS IN THE ARRAY \n", n);

    int arr[n], min = 0, max = n-1;

    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("ENTER THE ELEMENT TO SEARCHED : ");
    scanf("%d", &num);

    printf("TO FOR SEARCHING, PRESS 1 FOR LINEAR SEARCH AND 2 FOR BINARY SEARCH : ");
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
        while(min <= max)
        {
            mid = (min + max) / 2;
            if (arr[mid] > num)
                max = mid - 1;
            if (arr[mid] < num)
                min = mid + 1;
            if (arr[mid] == num)
            {
                index = mid+1;
                f = 1;
                break;
            }
        }
        if (f == 1)
        printf("ELEMENT FOUND AT INDEX %d", index);
        else
        printf("SORRY NOT FOUND");
        break;
    }
    return 0;
}
