class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow_p=0;
        for(int fast_p=0; fast_p<nums.size();fast_p++){
            if(nums[fast_p]!=0){
                swap(nums[slow_p], nums[fast_p]);
                slow_p++;
            }
        }
    }
};

/* Note: 

快慢指針：
1. 將兩個指針 slow 和 fast，初始時都指向陣列的開頭。
2. fast 指針會遍歷整個陣列，slow 指針用於放置非零的值。
3. 每當 fast 指向的值非0，將其值互換到 slow 的位置，然後將 slow 指針向前移動。
4. 當 fast 指針遍歷完整個陣列後，0將被移到最後面。

時間複雜度: O(n)

1. 快指針 fast_p 會從頭到尾遍歷整個向量一次。主要的循環會執行 n 次，其中 n 是 nums 的大小。
2. 在loop中，執行的操作為檢查、交換、增加都是 O(1)

空間複雜度: O(1)

1.只使用了固定的額外空間：兩個指針 (slow_p 和 fast_p)，因此，空間複雜度為 O(1)。

*/

