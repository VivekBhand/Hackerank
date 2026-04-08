class Solution {
public:

    vector<int> processed(vector<int> nums, int left, int right, int multi, int increment) {
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            
            while (left <= right) {
                nums[left] = (1LL * nums[left] * multi) % 1000000007;
                left += increment;
            }
        }
        return nums;
    }

    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for (auto q : queries) {
            nums = processed(nums, q[0], q[1], q[3], q[2]);
        }

        int nu = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            nu ^= nums[i];
        }
        return nu;
    }
};