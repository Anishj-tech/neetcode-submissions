class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> mpp1;
        unordered_map<char, int> mpp2;

        // Count characters in s
        for (int i = 0; i < s.size(); i++) {
            mpp1[s[i]]++;
        }

        // Count characters in t
        for (int i = 0; i < t.size(); i++) {
            mpp2[t[i]]++;
        }

        // Compare the two maps
        if (mpp1.size() != mpp2.size()) {
            return false;
        }

        for (auto it = mpp1.begin(); it != mpp1.end(); ++it) {
            if (mpp2[it->first] != it->second) {
                return false;
            }
        }

        return true;
    }
};