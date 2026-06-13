class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string alpha = "" ; 
        int a ; 
        for(auto word : words){
            int result = 0  ; 
            a = word.size();

            for(int i =0 ; i<a ; i++ ){
                result +=weights[word[i]-'a'];
            }
            result = result%26 ; 
            alpha += char(122-result);

        }
        return alpha ; 
    }
};