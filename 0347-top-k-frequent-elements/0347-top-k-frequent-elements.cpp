class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int>A;

        for(int i = 0 ; i<nums.size() ; i++){
            A[nums[i]]++;
        }
        vector<pair<int,int>>B;
        for(auto x : A){
            B.push_back({x.second , x.first});
        }
        sort(B.rbegin() , B.rend());

        vector<int>C;
        for(int i = 0 ; i<k ; i++){
            C.push_back(B[i].second);
        }
    return C;
    }
};