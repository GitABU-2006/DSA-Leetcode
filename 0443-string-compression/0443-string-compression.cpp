class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0; 
        int a = 0; 

        for (int j = 0; j <= chars.size(); j++) {
            if (j == chars.size() || chars[j] != chars[i]) {
                chars[a++] = chars[i];

                int count = j - i;
                if (count > 1) {
                    for (char c : to_string(count)) {
                        chars[a++] = c;
                    }
                }

                i = j;
            }
        }
        return a; 
    }
};