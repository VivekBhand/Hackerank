class Solution {
public:

    int reverseOfInt(int num) {
        int rev = 0;

        while (num) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        return rev;
    }
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> mp;

        int mini = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            if (mp.contains(nums[i])) {
                mini = min(mini, i - mp[nums[i]]);
            }
            int tmp = reverseOfInt(nums[i]);
            cout << tmp << "\n";
            mp[tmp] = i;
        }
        return mini == INT_MAX ? -1 : mini;
    }
};