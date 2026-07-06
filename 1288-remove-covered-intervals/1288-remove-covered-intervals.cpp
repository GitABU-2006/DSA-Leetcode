class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end(),
        [](vector<int>& a , vector<int>&b){
            if(a[0]==b[0])
                return a[1]>b[1]; 
            return a[0]<b[0];
        });

        int maxi = 0 ; 
        int count = 0 ; 

        for(auto interval : intervals ){
            int Maxi = interval[1] ; 

            if(Maxi > maxi){
                count++ ; 
                maxi = Maxi ; 
            }
        }
        return count ; 
    }
};