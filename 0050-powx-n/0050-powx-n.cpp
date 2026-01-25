class Solution {
public:
    double myPow(double x, int n) {
        long long N = n ;
        if(N<0){
            
            double y = 1/x;
            N = -N;
            return pow(y,N);
        }
        return pow(x,N);
    }
    
};