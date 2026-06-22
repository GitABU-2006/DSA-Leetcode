class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> mp;
        int result = -1;

        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) == mp.end()) {
                mp[s[i]]= i ; 
            } else {
                result = max(result, i - mp[s[i]] - 1);
            }
        }

        return result;
    }
};