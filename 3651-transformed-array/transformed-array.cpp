class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> ans;

        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            int ind = i + nums[i] + 10*n;
            ind = ind % n;
            ans.push_back(nums[ind]);
        }
        return ans;

    }
};