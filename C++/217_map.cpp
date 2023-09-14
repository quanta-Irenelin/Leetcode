class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> duplicate;
        for(int i=0; i<nums.size();i++){
            duplicate[nums[i]]++;
        }
        for(auto iter : duplicate){
            if(iter.second>=2){
                return true;
            }
        }
        return false;
    }
};

/* Note
1.先用一個map major來儲存值和重複的次數
2.如果有key重複次數大於或等於兩次的，就回傳true

時間複雜度:O(n)
-遍歷一次
空間複雜度:O(n)
-額外使用map去存空間
*/