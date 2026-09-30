#include <stdio.h>

int search(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
            return i;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = 5;

    int result = search(arr, n, x);

    if(result == -1)
        printf("Element not found");
    else
        printf("Element found at index %d", result);

    return 0;
}