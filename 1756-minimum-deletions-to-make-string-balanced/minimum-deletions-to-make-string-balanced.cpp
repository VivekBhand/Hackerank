class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        int totalA = 0;
        for (char c : s) {
            if (c == 'a') {
                totalA++;
            }
        }

        int leftB = 0;
        int rightA = totalA;
        int ans = rightA;
        for (int i = 0; i < n; i++) {
            
            if (s[i] == 'a') {
                rightA--;
            }
            else {
                leftB++;
            }
            ans = min(ans, leftB + rightA);
        }
        
        return ans;
    }
};