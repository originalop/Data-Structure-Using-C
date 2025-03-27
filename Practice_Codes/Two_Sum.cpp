#include<stdio.h>

int main()
{
    int arr[5] = {2, 7, 11, 15};
    int target = 9;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 4; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("[%d, %d]", i, j);
                break;
            }
        }
    }
    return 0;
}