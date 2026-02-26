class Solution {
public:
    int countSegments(string s) {
        int size = s.size();
        int count=0;
        bool check=false;

        if(size==0){
            return 0;
        }
        for(int i = 0 ; i<size ; i++){
            if(s[i] != ' ' && (i == 0 || s[i-1] == ' ')){
                count++;
            }
            if(s[i]!=' '){
                check=true;
            }
            
        }
        if(!check) return 0;
        
        return count;
    }
};