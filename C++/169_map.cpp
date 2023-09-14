class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> major;
        int major_num = 0;;
        for (int i = 0; i < nums.size(); i++){
            major[nums[i]]++;
        }
        for (auto iter : major) {
            if(iter.second > nums.size()/2){
                major_num = iter.first;
            }
        }
        return major_num;
    }
};

/* Note
1.先用一個map major來儲存值和重複的次數
2.再找出key重複次數大於n/2的，最後再回傳key值

時間複雜度:O(n)
-遍歷一次
空間複雜度:O(n)
-額外使用map去存空間

下次可以使用 Boyer-Moore來降低空間複雜度
*/