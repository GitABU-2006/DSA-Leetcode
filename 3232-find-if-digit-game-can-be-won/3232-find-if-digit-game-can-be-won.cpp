class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singleD = 0  , doubleD = 0 ;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]/2<5){
                singleD +=nums[i];
            }
            else{
                doubleD +=nums[i];
            }
        }
        if(singleD>doubleD or doubleD>singleD ){
            return true ;
        }
        return false;
        
    }
};