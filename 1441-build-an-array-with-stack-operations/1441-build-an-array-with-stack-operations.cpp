class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>s ; 
        int i = 1 ; 

        for(auto num : target){
            while(i<num){
                s.push_back("Push") ; 
                s.push_back("Pop") ; 
                i++;
            }
            s.push_back("Push");
            i++;
        }
        return s ; 
    }
};