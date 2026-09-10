class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count = 0 ; 
        int sum1 = 0 ; 
        
        for(int i =0 ; i<k ; i++){
            sum1 +=arr[i] ; 
        }
        if(sum1/k>=threshold){
                count++ ; 
            }
        for(int i = 1 ; i<=arr.size()-k ; i++){
            sum1 = sum1+arr[i+k-1]-arr[i-1] ; 
            if(sum1/k>=threshold){
                count++ ; 
            }
        }
        return count ; 
    }
};