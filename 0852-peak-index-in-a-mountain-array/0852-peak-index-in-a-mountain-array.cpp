class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    //     int a = 0 ; 
    //     for(int i = 1; i<arr.size()-1 ; i++){
    //         if(arr[i]>arr[i+1] and arr[i]>arr[i-1]){
    //             a = i;
    //         }
    //     }
    //     return a;
            int beg = 0 , end = arr.size()-1 ;
            while(end>beg){
                int mid = (beg+end)/2;
                if(arr[mid]>arr[mid+1] and arr[mid]>arr[mid-1] ){
                    return mid;
                }
                else if(arr[mid]>arr[mid-1]) {
                    beg = mid+1;
                }
                else{
                    end = mid ; 
                }
                
            } 
            return -1;
            
    }
};