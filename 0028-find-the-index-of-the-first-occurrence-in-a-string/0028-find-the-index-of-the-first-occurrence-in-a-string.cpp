class Solution {
public:
    int strStr(string haystack, string needle) {

        if (needle.size() == 0) return 0;

        if (needle.size() > haystack.size()) return -1;

        for (int i = 0; i <= haystack.size() - needle.size(); i++) {

            int k = 0;

            while (k < needle.size() &&
                   haystack[i + k] == needle[k]) {
                k++;
            }

            if (k == needle.size()) {
                return i;
            }
        }

        return -1;
    }
};