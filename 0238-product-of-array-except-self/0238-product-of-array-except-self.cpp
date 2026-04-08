class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int j = 1;
        int zeroC = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zeroC++;
            } else {
                j *= nums[i];
            }
        }

        for(int i = 0; i < nums.size(); i++){
            if(zeroC > 1){
                ans.push_back(0);
            } else if(zeroC == 1){
                if(nums[i] != 0){
                    ans.push_back(0);
                } else {
                    ans.push_back(j);  
                }
            } else {
                ans.push_back(j / nums[i]); 
            }
        }

        return ans;  
    }
};