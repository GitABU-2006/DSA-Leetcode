class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int beg=0 , end = nums.size()-1;
        while(beg<=end){
            int mid = (end+beg)/2;

            bool a = (mid==0 or nums[mid-1]!=nums[mid]);
            bool b = (mid==end or nums[mid+1]!=nums[mid]);
            
            if(a and b){
                return nums[mid];
            }
            else if(mid%2==0){
                if(nums[mid]==nums[mid-1]){
                    end = mid-1;
                }
                else{
                    beg=mid+1;
                }
            }
            else{
                if(nums[mid]==nums[mid-1]){
                    beg=mid+1;
                }
                else{
                    end =mid;
                }
            }
            
        }
        return -1;
    }
};