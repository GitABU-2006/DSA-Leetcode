class Solution {
public:
    long long sumAndMultiply(int n) {
        long long store = 0 ; 
        string s = to_string(n);
        int sum = 0 ; 
        

        for(auto num : s){
            if(num!='0'){
                int nums = num - '0' ; 
                store = store*10 + nums ; 
                sum += nums ; 

            }
        }
        return store*sum ; 
    }
};