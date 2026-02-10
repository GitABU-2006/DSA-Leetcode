class Solution {
public:
    bool isPalindrome(string s) {
        string b = "";
        string a ="";
        for(int i= s.size()-1 ; i>=0 ; i--){
            if(isalnum(s[i])){
                a += tolower(s[i]);
            }
            else{
                continue;
            }
        }
        for(int j = 0 ; j<s.size(); j++){
            if(isalnum(s[j])){
                b +=tolower(s[j]);
            }
            else{
                continue;
            }
        }

        if(b==a){
            return true;
        }
        return false;
    }
};