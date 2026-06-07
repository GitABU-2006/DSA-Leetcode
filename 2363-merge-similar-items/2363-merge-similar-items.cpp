class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> store;
        
        for(int i = 0 ; i<items1.size() ; i++){
            bool flag = false ; 
            for(int j = 0 ; j<items2.size() ; j++){
                if(items1[i][0] == items2[j][0]){
                    flag = true;
                    store.push_back({items1[i][0],items1[i][1]+items2[j][1]});
                }
            }
            if(!flag){
                store.push_back(items1[i]);
            }
        }
        
        for(int i = 0 ; i<items2.size() ; i++){
            bool flag = false ; 
            for(int j = 0 ; j<items1.size() ; j++){
                if(items2[i][0] == items1[j][0]){
                    flag = true;
                }
            }
            if(!flag){
                store.push_back(items2[i]);
            }
        } 
        sort(store.begin() , store.end());
        return store ;       
    }
};