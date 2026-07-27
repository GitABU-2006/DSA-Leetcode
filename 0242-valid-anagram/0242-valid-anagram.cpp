class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length()!=t.length()){
            return false ; 
        }

        unordered_map<char , int> m  ; 

        for(auto ch : s){
            m[ch]++ ; 
        }

        for(auto ch: t ){
            m[ch]-- ; 
        }

        for(auto pair : m ){
            if(pair.second != 0){
                return false ; 
            }
        }
        return true ; 
        
    }
};