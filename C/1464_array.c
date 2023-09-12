int maxProduct(int* nums, int numsSize){
    if(numsSize==2){
        return (nums[0]-1)*(nums[1]-1);
    } 
    int max = nums[0];
    int sub_max = 0;
    for(int i=1;i<numsSize; i++){
        if(max<=nums[i]){
            sub_max = max;
            max = nums[i];
        }else if(sub_max < nums[i]) {
            sub_max = nums[i];
        }
    }
    return (max-1)*(sub_max-1);
}

/*
這題解法是先找前兩個最大值
假設遍歷到比變數max還大的值，就先把第二大值更新成最大值
再將最大值更新成遍歷到的值
時間複雜度: O(n)
- 因為只遍歷陣列一次
空間複雜度: O(1) 
- 只使用了固定的額外空間 (sub_max, max, and iterater value "i")。
*/