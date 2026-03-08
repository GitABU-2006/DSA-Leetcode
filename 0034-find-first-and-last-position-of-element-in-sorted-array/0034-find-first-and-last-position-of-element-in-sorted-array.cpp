class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int a = 0 , b = 0 ; 
        bool c = true , d = true;
        for(int i = 0 ; i<nums.size() ; i++){
            if(nums[i]==target){
                a = i ; 
                c = false ; 
                break;
            }
        }
        for(int j = nums.size()-1 ; j>=0 ; j--){
            if(nums[j]==target){
                b = j ; 
                d = false;
                break ; 
            }
        }
        if(!c and !d){
            return {a,b};
        }
        else if(!c or !d){
            return {a,-1};
        }
        return{-1,-1};
    }
};