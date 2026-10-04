class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t_sum = 0 ; 
        for(auto num : nums){
            t_sum += num ; 
        }
        int left = 0 ; 

        for(int i = 0 ; i<nums.size() ; i++){
            int right = t_sum - left - nums[i] ; 

            if(left==right){
                return i ; 
                break ; 
            }

            left +=nums[i] ; 
        }
        return -1 ; 
    }
};