class Solution {
public:
    long long sumAndMultiply(int n) {
        long long store = 0 ; 
        int multi = 1 ; 
        int sum = 0 ; 

        while(n>0){
            int dig = n%10 ; 

            if(dig != 0){
                store = dig*multi + store ; 
                multi *=10  ;
                sum +=dig ;  
            }
            n/=10 ; 
        } 
        return sum*store ; 
    }
};