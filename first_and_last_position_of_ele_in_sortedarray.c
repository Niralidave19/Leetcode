/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* arr = (int*)malloc(2 * sizeof(int));
    arr[0] = -1;
    arr[1] = -1;
    int low = 0;
    int index=-1;
    int mid;
    int high = numsSize - 1;
    /*first find the location of the element
      then move left or right based on the 
      [5,7,7,8,8,10]*/
    while(low<=high){
        mid = low + (high-low)/2;
        if(nums[mid]==target){
            index = mid;
            break;
        }
        if(nums[mid]>target){
            high = mid - 1;
        }
        if(nums[mid]<target){
            low = mid+1;
        }
    }
    // If not found
    if (index == -1) return arr;

    // Expand left
    int left = index;
    while (left > 0 && nums[left - 1] == target) left--;

    // Expand right
    int right = index;
    while (right < numsSize - 1 && nums[right + 1] == target) right++;

    arr[0] = left;
    arr[1] = right;
    return arr;
}