#include<stdio.h>
    int q[2];
int *twoSum(int* nums, int numsSize, int target){
  for (int i = 0; i < numsSize; i++)
  {
    for (int j = i+1; j < numsSize; j++)
    {
        if (nums[i]+nums[j] == target)
        {
            q[0] = i;
            q[1] = j;
            return q;
        } 
    } 
  }
  return NULL;
}
int main()
{
    int size,target;
    int b[20];
    printf("Enter Number of Elements : ");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter a[%d] Element : ",i);
        scanf("%d",&b[i]);
    }
    printf("Enter Target : ");
    scanf("%d",&target);
    int *i = twoSum(b,size,target);
    printf("[ ");
    for (int i = 0; i < 2; i++)
    {
        printf("%d ",q[i]);
    }
    printf("]");
    return 0;
}
