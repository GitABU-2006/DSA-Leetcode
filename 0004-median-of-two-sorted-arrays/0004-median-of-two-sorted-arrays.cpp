class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int total = n1 + n2;

        int mid1 = (total - 1) / 2;
        int mid2 = total / 2;

        int i = 0, j = 0, cnt = 0;
        int m1 = 0, m2 = 0;

        while (cnt <= mid2) {
            int val;
            if (i < n1 && (j >= n2 || nums1[i] <= nums2[j])) {
                val = nums1[i++];
            } else {
                val = nums2[j++];
            }

            if (cnt == mid1) m1 = val;
            if (cnt == mid2) m2 = val;

            cnt++;
        }

        if (total % 2 == 1)
            return m2;
        else
            return (m1 + m2) / 2.0;
    }
};
