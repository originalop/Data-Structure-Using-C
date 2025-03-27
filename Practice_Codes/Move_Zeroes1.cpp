#include <stdio.h>
#define MAX 10

int main()
{
    int arr[MAX] = {0, 1, 2, 0, 3, 0, 4, 0, 5};
    int left = 0; // Pointer to track the position for non-zero elements

    // Traverse the array with a right pointer
    for (int right = 0; right < MAX; right++)
    {
        if (arr[right] != 0)
        {
            // Swap non-zero element to the left pointer position
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
        }
    }

    // Print the modified array
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}
