class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> n ; 
        for(int i = left ; i<=right; i++){
            int temp = i ;
            bool flag = true;
            while(temp>0){
                
                int digit = temp%10;
                temp/=10;
                if(digit==0){
                    flag=false;
                    break;
                }
                if(i%digit!=0){
                    flag = false;
                }
            }
            if(flag){
                n.push_back(i);
            }
        }
        return n;
        
    }
};