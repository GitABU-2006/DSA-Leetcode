class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<bool> lower(26,false); 
        vector<bool> upper(26,false);
        int count = 0 ; 
        for(auto c:word){
            if(c>='a' and c<='z'){
                lower[c-'a']=true;
            }
            else{
                upper[c-'A']=true ;
            }
        }
        for(int i = 0 ; i<26 ; i++){
            if(lower[i] and upper[i]){
                count++;
            }
        }
        return count ;
    }
};