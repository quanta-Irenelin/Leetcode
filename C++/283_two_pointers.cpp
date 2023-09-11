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