class Solution {
public:
    bool isPalindrome(int x) {
        int ld , rev = 0 ; 
        int sign = (x<0) ? -1 : 1 ;
        x = llabs(x);
        int temp = x; 
        if(sign == -1){
            return false;
        }
        while(temp>0){
            ld = temp%10;
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && ld > 7))
                return 0;
            rev = rev*10+ld;
            temp = temp/10;
        }
        if(rev==x){
            return true;
        }
        else{
            return false;
        }
    }
};