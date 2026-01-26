class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        unordered_map<int, vector<vector<int>>> mp;
        int mini = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            int tmp = arr[i + 1] - arr[i];
            if (tmp <= mini) {
                mp[tmp].push_back({arr[i], arr[i+1]});
                mini = tmp;
            }
        }
        return mp[mini];
    }
};