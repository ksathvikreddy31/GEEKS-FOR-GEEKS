class Solution {
public:
    vector<int> compute(string &s) {
        int n = s.size();
        vector<int> lps(n, 0);
        int len = 0;
        int i = 1;

        while (i < n) {
            if (s[i] == s[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        return lps;
    }

    bool areRotations(string &s1, string &s2) {
        if (s1.size() != s2.size()) return false;

        string concat = s1 + s1;
        vector<int> lps = compute(s2);

        int i = 0, j = -1;
        int n = concat.size(), m = s2.size();

        while (i < n) {
            if (concat[i] == s2[j + 1]) {
                i++;
                j++;
                if (j == m - 1) return true;  
            } else {
                if (j != -1) j = lps[j] - 1; 
                else i++;
            }
        }

        return false;
    }
};
