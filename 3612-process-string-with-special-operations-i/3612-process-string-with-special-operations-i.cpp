class Solution {
public:
    string processStr(string s) {
        string result = "";
        for(int i = 0 ; i<s.size() ; i++){

            if(s[i] == '#'){
                result +=result ; 
            }
            else if(s[i]=='%'){
                if(!result.empty()){
                    int left = 0;
                    int right = result.size() - 1;

                    while(left < right){
                        swap(result[left], result[right]);
                        left++;
                        right--;
                    }
                }
                
            }
            else if (s[i]=='*'){
                if(!result.empty()){
                    result.pop_back();
                }
            }
            else{
                result +=s[i];
            }
        }
        return result ; 
    }
};