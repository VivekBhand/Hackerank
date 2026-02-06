class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();

        int i = 0;
        sort(nums.begin(), nums.end());
        int maxWindow = 1;
        for (int j = 0; j < n; j++) {
            while ((long long)nums[j] > (long long)nums[i]*k) {
                i++;
            }
            int count = j  - i + 1;
            maxWindow = max(maxWindow, count);
       }
       return n - maxWindow;
    }
};