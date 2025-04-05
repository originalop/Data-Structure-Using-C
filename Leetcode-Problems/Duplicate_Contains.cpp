#include <stdio.h>
bool getDuplicate(int[], int);
int main()
{
    int nums[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    bool value = getDuplicate(nums, sizeof(nums) / sizeof(nums[0]));
    printf("%s", (value > 0) ? "True" : "false");
    return 0;
}

bool getDuplicate(int nums[], int numsSize)
{
    int falseCnt = 0;
    int trueCnt = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (i == j)
            {
                j++;
            }
            if (nums[i] == nums[j])
            {
                trueCnt++;
            }
            else
            {
                falseCnt++;
            }
        }
    }
    if (trueCnt > 0)
    {
        printf("TrueCnt: %d\n", trueCnt);
        return true;
    }
    else if (falseCnt > 0)
    {
        printf("TrueCnt: %d", falseCnt);
        return false;
    }
}