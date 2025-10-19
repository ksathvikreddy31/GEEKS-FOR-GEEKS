class Solution {
public:
    char nonRepeatingChar(string &s) {
        int n = s.size();
        unordered_map<char, int> mp;

        // Count frequencies
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        // Traverse string again in original order
        for (int i = 0; i < n; i++) {
            if (mp[s[i]] == 1) {
                return s[i]; // first non-repeating in original order
            }
        }

        return '$'; // If no unique character found
    }
};
