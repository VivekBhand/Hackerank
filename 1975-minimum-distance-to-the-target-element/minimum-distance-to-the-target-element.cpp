class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {

        int n = nums.size();
        int l = 0;
        int r = n-1;

        int dist = INT_MAX;

        while (l <= r) {
            if (nums[l] == target) {
                // cout << "Flagged here " <<  l << " " << start;
                dist = min(dist, abs(l - start));
            }
            if (nums[r] == target) {
                // cout << "Flagged here " <<  r << " " << start;
                dist = min(dist, abs(r - start));
            }

            ++l;
            --r;
        }
        return dist;
    }
};