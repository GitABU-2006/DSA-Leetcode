class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0 ; 
        int maxCount = 0 ; 
        for(auto c : nums){
            if(c==1){
                count++;
                if(count>maxCount){
                    maxCount = count ; 
                }
            }
            else{
                count = 0 ; 
            }
        }
        return maxCount ; 
    }
};