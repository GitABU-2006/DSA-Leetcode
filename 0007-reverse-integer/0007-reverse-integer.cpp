class Solution {
public:
    int reverse(int x) {
        int ld , rev=0;
        int sign = (x<0)? -1 : 1;
        x = llabs(x);
        while(x>0){
            ld =x%10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7))
                return 0;
            rev = rev*10+ld;
            x = x/10;
        }
        
    return  rev*sign ; 
    }
    
};