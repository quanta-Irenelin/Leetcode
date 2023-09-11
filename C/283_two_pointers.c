void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void moveZeroes(int* nums, int numsSize){
    int i = 0;
    for(int j = 0; j < numsSize; j++){
        if(nums[j] != 0){
            swap(&nums[j], &nums[i]);
            i++;
        }
    }

}

/* Note: 
使用快慢指針
時間複雜度: O(n)
空間複雜度: O(1)
*/