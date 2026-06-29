class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0 ; 
        for(int i = 0 ; i<patterns.size() ; i++){
            string a = patterns[i] ; 
            int b = a.size() ; 

            for(int j = 0 ; j+b<=word.size(); j++){
                if (word.substr(j, b) == a) {
                    count++;
                    break;
                }  
            }
        }
        return count ;
    }
};