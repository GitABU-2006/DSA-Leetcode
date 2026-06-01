class Solution {
public:
    int minElement(vector<int>& nums) {
        int minim = nums[0] ;
        for(int i =0 ; i<nums.size() ; i++){
            int y = 0 ;
            int x = nums[i];
            while(x>0){
                int ld = x%10 ; 
                y += ld ;
                x /=10; 
            }
            if(minim>=y){
                minim = y;
            }
        }
        return minim;
    }
};