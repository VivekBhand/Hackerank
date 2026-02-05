class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> ans(n, 0);
        int ind;
        for (int i = 0; i < n; ++i) {
            ind = i + nums[i] + 10*n;
            ind = ind % n;
            ans[i] = nums[ind];
        }
        return ans;

    }
};