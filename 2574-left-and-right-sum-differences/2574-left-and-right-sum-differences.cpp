class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> store ; 
        int rightsum = 0 ; 
        int leftsum = 0 ;

        for(int i = 0 ; i<nums.size() ; i++){
            rightsum+=nums[i];
        }
        for(int i = 0 ; i<nums.size() ; i++){
            rightsum -= nums[i];
            store.push_back({abs(leftsum-rightsum)});
            leftsum+=nums[i];
        }
        return store;
    }
};