class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum1 = 0 ; 
        double maxSum = 0 ; 

        for(int i = 0 ; i<k ; i++){
            sum1 += nums[i] ; 
            maxSum = sum1 ; 
        }

        for(int i = 1 ; i<=nums.size()-k ; i++){
            sum1 = sum1 + nums[i+k-1] - nums[i-1] ; 
            maxSum = max(maxSum , sum1) ; 
        }
        maxSum /=k ;
        return maxSum ;  
    }
};