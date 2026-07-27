class Solution {
public:

    bool match(char open , char close ){
        if(open=='(' and close==')') return true  ; 
        if(open=='{' && close=='}') return true;
        if(open=='[' && close==']') return true;
        return false;
    }

    bool isValid(string s) {
        stack<char> st ; 

        for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]) ; 

            }
            else{
                if(st.empty() || !match(st.top() , s[i])){
                    return false ; 
                }
                st.pop() ; 
            }
        }
        return st.empty() ; 
    }
};