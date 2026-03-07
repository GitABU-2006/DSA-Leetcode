class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool flag = true;
        int a = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]==target){
                flag=false;
                a = i ; 
                break;
            }
        }
        if(!flag){
            return a;
        }
        return -1;
    }
};