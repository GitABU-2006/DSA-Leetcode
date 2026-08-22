class Solution {
public:
    bool checkDivisibility(int n) {
        long long  sum = 0 ; 
        long long pro = 1 ; 
        int x = n;
        while(x!=0){
            long long  digi = x%10 ; 
            sum+=digi ; 
            pro*=digi ; 
            x/=10 ; 
        }
        if(n%(pro+sum) ==0){
            return true ;
        }
        else{
            return false ;
        }
    }
};