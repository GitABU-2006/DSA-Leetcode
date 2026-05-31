class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        bool flag = false ; 
        long long c = mass;
        for(int i = 0 ; i<asteroids.size() ; i++){
            if(c >= asteroids[i]){
                c+=asteroids[i];
                flag = true ;
            }
            else{
                flag = false;
                break ;
            }

        }
        if(flag){
            return true ;
        }
        return false;
    }
};