class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        int j = 0;
        int count = 0;
        int sum = 0;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (nums[j] == nums[i]) {
                count++;
            } else {
                if (count % k == 0) {
                    for (int x = j; x < j + count; x++) {
                        sum += nums[x];
                    }
                }
                j = i;
                count = 1;
            }
        }

        
        if (count % k == 0) {
            for (int x = j; x < j + count; x++) {
                sum += nums[x];
            }
        }

        return sum;
    }
};