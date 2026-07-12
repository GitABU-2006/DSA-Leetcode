class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arrange(arr.begin() , arr.end()) ; 
        sort(arrange.begin() , arrange.end()) ; 

        map<int , int> rank  ; 
        int a = 1; 
        for(int i = 0 ; i<arr.size() ; i++){
            if(rank[arrange[i]]==0){
                rank[arrange[i]]= a++; 
            }
        }
        vector<int> ans ; 
        for(int i = 0 ; i<arr.size() ; i++){
            ans.push_back(rank[arr[i]]) ; 
        }
        return ans ; 
        
    }
};