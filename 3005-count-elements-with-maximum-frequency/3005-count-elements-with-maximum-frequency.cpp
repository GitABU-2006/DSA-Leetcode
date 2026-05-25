class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int , int> A  ;
        for(auto num : nums){
            A[num]++;
        }
        int maxF = 0 ; 
        for(auto num : A){
            maxF = max(maxF , num.second ); 
        }

        int result = 0 ; 
        for(auto num: A){
            if(num.second == maxF){
                result += maxF;
            }
        }
        return result ; 
    }
};