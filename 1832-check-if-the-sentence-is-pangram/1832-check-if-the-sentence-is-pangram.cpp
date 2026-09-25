class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>c(26 , -1) ;

        for(int i = 0 ; i<sentence.size() ; i++){
            int index = sentence[i] - 'a' ; 
            c[index]++  ; 
            
        }
        bool flag = true ; 
        for(int i = 0 ; i<26 ; i++){
            if(c[i]==-1){
                flag = false ; 
                break ; 
            }
        }
        if(flag){
            return true ; 
        }
        else{
            return false ; 
        }
    }
};