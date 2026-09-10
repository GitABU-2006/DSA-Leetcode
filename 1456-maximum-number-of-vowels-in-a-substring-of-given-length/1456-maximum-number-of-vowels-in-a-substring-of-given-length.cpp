class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0 ;
        int maxCount = 0 ;  
        string ch = "" ; 
        for(int i = 0 ; i<k ; i++){
            ch +=s[i] ; 
            if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                count++;
            }
            maxCount = count ; 
        }
        for(int i = 1 ; i<=s.size()-k ; i++){
            if(s[i-1]=='a' or s[i-1]=='e' or s[i-1]=='i' or s[i-1]=='o' or s[i-1]=='u'){
                count-- ; 
            }
            if(s[i+k-1]=='a' or s[i+k-1]=='e' or s[i+k-1]=='i' or s[i+k-1]=='o' or s[i+k-1]=='u' ){
                count++ ; 
            }
            maxCount = max(maxCount , count) ; 
        }
        return maxCount ; 
    }
};