class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a ="";
        for(int i = 0 ; i<strs[0].size() ; i++){
            char b = strs[0][i];
            for(int j = 0 ; j<strs.size(); j++){
                if(i>=strs[j].size() or strs[j][i] != b){
                    return a;
                }
            }
            a+=b;
        }
        return a;
    }
};