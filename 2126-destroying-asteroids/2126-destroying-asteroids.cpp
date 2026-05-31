class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        long long c = mass;
        for(int i = 0 ; i<asteroids.size() ; i++){
            if(c >= asteroids[i]){
                c+=asteroids[i];
            }
            else{
                 return false;
            }

        }
            return true ;
    }
};