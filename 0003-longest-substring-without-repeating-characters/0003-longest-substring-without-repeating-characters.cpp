class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>mp ;

        int left = 0 ; 
        int ans = 0 ; 

        for(int i = 0 ; i<s.size() ; i++){
            while(mp.count(s[i])){
                mp.erase(s[left]) ; 
                left++ ; 
            }
            mp.insert(s[i]) ; 
            ans = max(ans, i - left + 1);
        }
        return ans ;  
    }
};