class Solution {
public:
    int firstUniqChar(string s) {
        int count = 0 ; 
        for(int i = 0 ; i<s.size(); i++){
            bool check = true ; 
            for(int j = 0  ; j<s.size(); j++){
                if(i!=j and s[i]==s[j]){
                    check = false;
                    break;
                }
            }
            if(check== true){
                return i;
            }
        }
        return -1 ;
    }
};