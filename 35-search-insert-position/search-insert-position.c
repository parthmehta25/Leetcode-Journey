int searchInsert(int* nums, int numsSize, int target) {
    int x=0;
    for(int i=0;i<numsSize;i++)
    {
        if(target==nums[i])
        {   
            x=1;
            return i;
        }
    }
    if(x==0)
    {
        for(int i=0;i<numsSize;i++)
        {
            if(nums[i]>target)
            {
                return i;
            }
            else if(nums[numsSize-1]<target)
            {
                return numsSize;
            }
        }
    }
    return -1;
}