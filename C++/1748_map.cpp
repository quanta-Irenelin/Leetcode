class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map <int, int>uniq;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            uniq[nums[i]]++;
        }
        for(auto iter : uniq){
            if(iter.second==1){
                sum+=iter.first;
            }
        }
        return sum;
    }
};

/* Note
1.先用一個map major來儲存值和重複的次數
2.如果有key為1的話，就加總key的數字

時間複雜度:O(n)
-遍歷一次
空間複雜度:O(n)
-額外使用map去存空間
*/