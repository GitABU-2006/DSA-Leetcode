class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end() , greater<int>());
        int a=0  ; 
        for(int i = 0 ; i<nums.size()+1 ; i++){
            if(i==k-1){
                a = nums[i];
            }
        }
        return a ;
    }
};