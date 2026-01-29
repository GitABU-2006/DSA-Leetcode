class Solution {
public:
    bool isHappy(int n) {

        while (n != 1) {
            int sum = 0;          // ✅ reset EVERY time

            while (n > 0) {       // ✅ digit extraction only
                int ld = n % 10;
                sum += ld * ld;
                n /= 10;
            }

            n = sum;              // update number

            if (n == 4) return false;  // ❌ non-happy cycle
        }

        return true;              // n == 1
    }
};
