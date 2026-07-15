class Solution {
public:

    int gcd(int a , int b){
        if(b==0){
            return a ; 
        }
        return gcd(b , a%b) ; 
    }

    int gcdOfOddEvenSums(int n) {
        int odd= 0  , even= 0  ; 
        int fodd = 1 , feven = 2 ; 
        for(int i = 1 ; i<= n ; i++){
            even +=feven ; 
            feven +=2 ; 
             
            odd +=fodd ; 
            fodd +=2 ; 
        }
        return  gcd(odd , even) ; 
        
        
    }
};