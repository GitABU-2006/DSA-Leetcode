class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0 ;
        bool check = true; 
        for(int i = 1 ; i<num ; i++){
            if(num%i==0){
                sum += i;
            }
        }
        if(sum != num){
            check = false;
        }
        if(check){
            return true;
        }
        else{
           return false;
        }
       
    }
};