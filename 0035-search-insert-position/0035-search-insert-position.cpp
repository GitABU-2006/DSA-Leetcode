class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0 ; 
        int end = nums.size()-1;

        while(end>=low){
            int mid = (end+low)/2;

            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};