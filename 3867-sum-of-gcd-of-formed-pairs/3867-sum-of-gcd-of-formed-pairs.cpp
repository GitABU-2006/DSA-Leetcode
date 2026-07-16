class Solution {
public:

    int gcd(int a , int b ){
        if(b!=0){
            return gcd(b , a%b) ;
        }
        else{
            return a ; 
        }
    }

    long long gcdSum(vector<int>& nums) {

        int s = nums.size() ; 
        vector<int>prefixGod(s) ; 
        int m = 0 ; 
        for(int i = 0 ; i< s ; i++){
            m = max(m , nums[i]) ; 
            prefixGod[i] = gcd(nums[i] , m) ; 
        }

        sort(prefixGod.begin() , prefixGod.end()) ; 
        long long  sum = 0 ; 
        int i = 0 , j = s -1  ;
        while(i<j){
            sum += gcd(prefixGod[i] , prefixGod[j]) ; 
            i++ ; j-- ; 
        } 
        return sum ; 
    }
};