class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i<nums.size() ; i= i+2){
            int count= 0 ;
            if(nums.size()==1){
                return nums[0];
            }
            if(nums[i]==nums[i+1]){
                continue;
            }
            return nums[i];
           
        }
       return 0; 
    }
}
;