class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        vector<int> value ; 
        value.push_back(0);
        int add = 0 ; 

        for(int i = 0 ; i<nums.size() ; i++){
            add += nums[i];
            value.push_back(add);
        }

        int count = 0 ; 
        for(int i = 0 ; i<value.size() ; i++){
            for(int j = i+1 ; j<value.size(); j++){
                if(value[j]-value[i]==k){
                    count++;
                }
                continue ; 
            }
        }
        return count ; 
    }
};