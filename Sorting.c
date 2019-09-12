#include <stdio.h>

int main()
{
    int n, num, index, choice, temp;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);

    printf("YOU ENTER %d AS THE SIZE OF THE ARRAY \n", n);
    printf("ENTER %d ELEMENTS IN THE ARRAY \n");

    int arr[n];

    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("TO SEARCH THE ELEMENT, PRESS 1 FOR BUBBLE SORTING AND 2 FOR SELECTION SORTING : ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        // Bubble Sorting
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-i; j++)
            {
                if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                }
            }
        }

        printf("SORTED ARRAY : ");
        for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
        break;

    case 2:
        // Selection Sorting
    }

    return 0;
}
