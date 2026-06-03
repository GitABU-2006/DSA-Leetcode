class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> store ; 
        unordered_set<int> check ; 
        for(auto num : nums){
            if(check.find(num) != check.end()){
                store.push_back(num);
                
            }
            else{
                check.insert(num);
            }
        }
        return store;
    }
};