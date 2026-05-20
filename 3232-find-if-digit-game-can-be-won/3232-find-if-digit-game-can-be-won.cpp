class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int alice = 0  , bob = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]/2<5){
                alice +=nums[i];
            }
            else{
                bob +=nums[i];
            }
        }
        if(alice>bob or bob>alice ){
            return true ;
        }
        return false;
        
    }
};