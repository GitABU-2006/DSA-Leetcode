class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxKids = 0 ;
        vector<bool>result ;  

        for(int i = 0 ; i<candies.size() ; i++){
            maxKids = max(maxKids , candies[i]); 
        }

        for(int i = 0 ; i<candies.size() ; i++){
            if(candies[i]+extraCandies>=maxKids){
                result.push_back(true); 
            }
            else{
                result.push_back(false); 
            }
        }
        return result ; 
    }
};