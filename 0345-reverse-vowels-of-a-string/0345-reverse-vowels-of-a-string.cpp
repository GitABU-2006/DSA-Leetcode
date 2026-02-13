class Solution {
public:
    string reverseVowels(string s) {
        string vow = "";
        string b="";
        for(int i = s.size()-1 ; i>=0; i--){
            if(s[i]=='A' or s[i]=='E' or s[i]=='I' or s[i]=='O' or s[i]=='U' or s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                vow+=s[i];
            }
        }
        int k =0;
        for(int j = 0 ; j<s.size(); j++){
            if(s[j]=='A' or s[j]=='E' or s[j]=='I' or s[j]=='O' or s[j]=='U' or s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u'){
                s[j]=vow[k];
                b+=s[j];
                k++;
            }
            else{
                b+=s[j];
                
            }
        }
        return b;

    }
};