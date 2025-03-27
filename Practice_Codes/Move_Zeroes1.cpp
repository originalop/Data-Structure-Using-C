#include <stdio.h>
#define MAX 10

int main()
{
    int arr[MAX] = {0,1,02,0,3,0,4,0,5};
    int count = 0; // Count of non-zero elements

    // Traverse the array and move non-zero elements to the front
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] != 0)
        {
            arr[count++] = arr[i]; // Move non-zero element to the front
        }
    }

    // Fill remaining positions with zeroes
    while (count < MAX)
    {
        arr[count++] = 0;
    }

    // Print the modified array
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
