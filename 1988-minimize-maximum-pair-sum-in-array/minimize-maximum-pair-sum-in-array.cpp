class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int i = 0;
        int n = nums.size();
        int j = n - 1;
        int maxSum = INT_MIN;
        while (i < j) {
            int sum = nums[i++] + nums[j--];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};