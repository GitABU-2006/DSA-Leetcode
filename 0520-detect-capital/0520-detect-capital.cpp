class Solution {
public:
    bool detectCapitalUse(string word) {
        int upp = 0 ;
        for(int i = 0 ; i<word.size(); i++){
            if(isupper(word[i])){
                upp++;
            }
        }
        if(upp==word.size()) return true;
        if(upp==0) return true;
        if(upp==1 and isupper(word[0])) return true;

        return false;
    }
    
};