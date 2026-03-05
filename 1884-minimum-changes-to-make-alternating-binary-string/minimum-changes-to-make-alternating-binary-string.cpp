class Solution {
public:
    int count(string s, char c) {
        int count = 0;
        
        for (char t : s) {
            if (c != t) {
                count++;
            }
            c = c == '1' ? '0' : '1';
        }
        return count;
    }
    int minOperations(string s) {
     int ans = min(count(s, '1'), count(s, '0'));
     return ans;
    }
};