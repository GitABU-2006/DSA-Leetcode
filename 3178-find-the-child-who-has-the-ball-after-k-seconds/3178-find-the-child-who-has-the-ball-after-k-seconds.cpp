class Solution {
public:
    int numberOfChild(int n, int k) {
        int a = (n-1)*2;
        int b = k%a;
        if(b<n-1){
            return b;
        }
        return a-b;

    }
};