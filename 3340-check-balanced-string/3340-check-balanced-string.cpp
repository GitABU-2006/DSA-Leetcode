class Solution {
public:
    bool isBalanced(string num) {
        int odd = 0 ; 
        int even = 0 ; 

        for(int i = 0 ; i<num.size() ; i++){
            if(i%2==0){
                int nums = num[i]-'0';
                even+=nums ; 
            }
            else{
                int nums = num[i]-'0';
                odd+=nums ; 
            }
        }
        if(even!=odd){
            return false;
            
        }
        return true  ; 
    }
};