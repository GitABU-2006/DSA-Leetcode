class Solution {
public:
    int averageValue(vector<int>& nums) {
        int a = 0 ;
        int count=0; 
        for(int i = 0 ; i<nums.size() ; i++){
            
            if(nums[i]%6==0){
                a+=nums[i];
                count++;
            }
        }
        if(count==0){
            return 0;
        }
        return a/count;
    }
};