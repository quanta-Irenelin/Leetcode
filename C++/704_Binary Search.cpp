/*左閉右閉*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left <= right){   /*注意左閉右閉合法區間*/
            int middle = (left+right)/2;
            if(nums[middle]>target){
                right = middle - 1;
            }else if(nums[middle]<target){
                left = middle + 1;
            }else{
                return middle;
            }
        }
        return -1;
    }
};

/*左閉右開*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();
        while(left < right){  /*注意左閉右開合法區間*/
            int middle = (left+right)/2;
            if(nums[middle]>target){
                right = middle;
            }else if(nums[middle]<target){
                left = middle + 1;
            }else{
                return middle;
            }
        }
        return -1;
    }
};

/* Note
1. 迴圈條件會有兩種
    a.左閉右閉[n,n]
    b.左閉右開[n,n)
2. 要注意right的邊界設定

時間複雜度: O(log n)
使用二分搜索法，每次都將搜索範圍縮小一半，因此時間複雜度為 O(log n)
空間複雜度:O(1)
只使用了固定的額外空間：三個整數變數 (left, right, middle)
因此，空間複雜度為O(1)

*/