class Solution {
public:
    bool isPerfectSquare(int num) {
        int a = sqrt(num);
        if(num == a*a){
            return true;
        }
        return false;
    }
};