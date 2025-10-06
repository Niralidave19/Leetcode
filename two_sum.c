/** LEETCODE PROBLEM 1. TWO SUM
 * Note: The returned array must be malloced, assume caller calls free().
 * Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order.
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *arr = (int *)malloc(sizeof(int)*2);
    *returnSize = 2;
    /*iterate through the array*/
    for(int i=0;i<numsSize;i++){
        for(int j = i+1;j<numsSize;j++){
            if((nums[i] + nums[j]) == (target)){
                printf("hi");
                if(nums[i]>nums[j]){
                    arr[0] = j;
                    arr[1] = i;
                    return arr;
                }
                arr[0] = i;
                arr[1] = j;
                return arr;
            }
        }
    }
    return arr;
}