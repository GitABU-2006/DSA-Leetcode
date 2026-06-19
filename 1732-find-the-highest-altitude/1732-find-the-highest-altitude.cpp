class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> alti ; 
        int a = 0 ; 
        for(int i = 0 ; i<gain.size() ; i++){
            alti.push_back(a);
            a +=gain[i]; 
        }
        alti.push_back(a);
        int maxi = alti[0];
        for(int i = 1 ; i<alti.size() ; i++){
            maxi = max(maxi , alti[i]);
        }

        return maxi;
    }
};