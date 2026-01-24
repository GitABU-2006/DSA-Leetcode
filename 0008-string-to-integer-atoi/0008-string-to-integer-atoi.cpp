class Solution {
public:
    int myAtoi(string s) {
        int x = s.length();
        int nums = 0 ;
        int i = 0 ; 
        int sign = 1;

        while(i<x && s[i]==' '){
            i++;
        }

        if(i<x &&(s[i]=='+' or s[i]=='-')){
           if(s[i]=='-'){
            sign = -1;
           }
           i++;
        }
        while(i<x && isdigit(s[i])){
            int digits = s[i]-'0';
            if (nums > INT_MAX / 10 ||
               (nums == INT_MAX / 10 && digits > 7)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }

            nums = nums*10+digits;
            i++;
        }
        return sign*nums;

    }
};