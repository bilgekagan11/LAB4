/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int i ;
    for(i = 0; i<numsSize;i++){
        for(int j = i+1; j<numsSize ; j++){
            if (target==(nums[j]+nums[i])){
                int * result = (int *)malloc(2*sizeof(int));
                result[0] = j;
                result[1] = i;
                * returnSize = 2;
                return result;
            }
        }
        * returnSize = 0;
    }
    return NULL;
}