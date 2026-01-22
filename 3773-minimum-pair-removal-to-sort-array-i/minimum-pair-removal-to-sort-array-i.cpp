class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int ops = 0;

        auto isNonDecreasing = [&](vector<int>& a) {
            for (int i = 1; i < a.size(); i++) {
                if (a[i] < a[i-1]) return false;
            }
            return true;
        };

        while (!isNonDecreasing(nums)) {
            int minSum = INT_MAX;
            int idx = 0;

            for (int i = 0; i < nums.size() - 1; i++) {
                int s = nums[i] + nums[i+1];
                if (s < minSum) {
                    minSum = s;
                    idx = i;
                }
            }

            nums[idx] += nums[idx + 1];
            nums.erase(nums.begin() + idx + 1);
            ops++;
        }

        return ops;
    }
};
