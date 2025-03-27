#include <stdio.h>
#define MAX 10

int main()
{
    int arr[MAX] = {0,1,0,2,0,3,0,4,0,5};
    int lastIndex = 4;
    int temp = 0;
    for (int k = 0; k < MAX; k++)
    {
        for (int i = 0; i < MAX; i++)
        {
            if (arr[i] == 0)
            {
                temp = arr[i];
                for (int j = i; j <= MAX-2; j++)
                {
                    arr[j] = arr[j + 1];
                }
                arr[lastIndex] = temp;
            }
            // i--;
        }
    }
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;
}