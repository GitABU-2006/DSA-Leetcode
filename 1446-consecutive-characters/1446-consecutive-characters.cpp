class Solution {
public:
    int maxPower(string s) {
        int count = 1 ; 
        int maxC = 1;
        if(s.size()==0){
            return 0 ; 
        }
        for(int i = 1 ; i<s.size() ; i++){
            if(s[i]==s[i-1]){
                count++;
            }
            else{
            count = 1;
            }
            maxC = max(maxC,count);
        }
        return maxC;
    }
};