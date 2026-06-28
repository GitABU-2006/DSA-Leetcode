class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int, int>num ; 
        vector<int> result ; 

        for(int i = 0 ; i<nums.size() ; i++){
            num[nums[i]]++;
        }

        for(auto dig : nums){
            if(num[dig]==1 and (!num.count(dig+1) and !num.count(dig-1))){
                result.push_back(dig) ; 
                }
            }
        return result ; 
    }
};