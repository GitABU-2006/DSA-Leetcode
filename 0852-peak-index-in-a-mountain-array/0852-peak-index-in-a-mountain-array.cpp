class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int a = 0 ; 
        for(int i = 1; i<arr.size()-1 ; i++){
            if(arr[i]>arr[i+1] and arr[i]>arr[i-1]){
                a = i;
            }
        }
        return a;
    }
};