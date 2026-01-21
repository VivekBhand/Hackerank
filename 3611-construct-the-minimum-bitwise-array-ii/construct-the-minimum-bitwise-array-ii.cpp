class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);

        for (int i = 0; i < n; i++) {
            int x = nums[i];

            // 2 has no solution
            if (x == 2) {
                ans[i] = -1;
                continue;
            }

            // Count trailing ones
            int t = 0;
            while ((x >> t) & 1) {
                t++;
            }

            // If no trailing ones (even number), no solution
            if (t == 0) {
                ans[i] = -1;
                continue;
            }

            // Remove the HIGHEST trailing-one bit
            int bit = 1 << (t - 1);
            int candidate = x - bit;

            if ((candidate | (candidate + 1)) == x) {
                ans[i] = candidate;
            } else {
                ans[i] = -1;
            }
        }

        return ans;
    }
};
