class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int a = 0 ;
        int b = INT_MIN ; 
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]>b){
                b=nums[i];
                a = i ; 
            }
        }
        return a ; 
    }
};