class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        /*
        int res = INT_MAX;
        int n = nums.size();
        if ( n == 1) {
            return 0;
        }
        if (k >= n) {
            int max = *max_element(nums.begin(), nums.end());
            int min = *min_element(nums.begin(), nums.end());
            return max - min;
        }
        for (int i = 0; i < n -1; i++) {
            for (int j = i + 1; j < n; j++) {
                int tmp = nums[j] - nums[i];
                tmp = tmp < 0 ? -tmp : tmp;
                cout << nums[j] << " " << nums[i] << " " << tmp << "\n";
                if (res > tmp) {
                    res = tmp;
                    cout << "temp updated here" << "\n";
                }
                // res = min(res, tmp);
            }
        }
        cout << "this is the last res" << res << "\n";
        return res;
        */

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int res = INT_MAX;
        for (int i = 0; i < n - k + 1; i++ ) {
            int j = i + k - 1;
            int tmp = nums[j] - nums[i];
            // cout << tmp << " " << nums[i] << " " << nums[j] << "\n";
            res = min(tmp, res);
        }
        if (res == INT_MAX) {
            return 0;
        }
        return res;
    }
};