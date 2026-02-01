class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;

        for (int i = 0; i <= 30; i++) {   // int limit
            long long val = llround(pow(2, i));
            if (val == n) return true;
        }
        return false;
    }
};
