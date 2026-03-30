class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<int> v(52, 0);

        for (int i = 0; i < s1.size(); i=i+2) {
            v[s1[i] - 'a']++;
            v[s2[i] - 'a']--;
        }

        for (int i = 1; i < s1.size(); i=i+2) {
            v[s1[i] - 'a'+26]++;
            v[s2[i] - 'a'+26]--;
        }

        for (int i = 0; i < 52; i++) {
            if (v[i] != 0) {
                return false;
            }
        }
        return true;
    }
};