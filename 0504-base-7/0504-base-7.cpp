class Solution {
public:
    string convertToBase7(int num) {
        if(num==0){
            return "0";
        }
        bool sign = num<0;
        
        string result = "";

        int temp = abs(num);
        while(temp>0){
            result +=to_string(temp%7);
            temp/= 7;
        }
        if(sign){
            result+='-';
        }
        reverse(result.begin(),result.end());
        return result;
    }
};