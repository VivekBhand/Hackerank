#include <vector>
class Solution {
public:
    int maximizeSquareArea(int m, int n, vector<int>& hFences, vector<int>& vFences) {
        vector<int> horizontal = {1, m};
        vector<int> vertical = {1, n};

        for (int h : hFences) {
            horizontal.push_back(h);
        }
        for (int v : vFences) {
            vertical.push_back(v);
        }
        sort(horizontal.begin(), horizontal.end());
        sort(vertical.begin(), vertical.end());

        unordered_set<int> hDiffs;
        for (int i = 0; i < horizontal.size() - 1; i++) {
            for (int j = i + 1; j < horizontal.size(); j++) {
                hDiffs.insert(horizontal[j] - horizontal[i]);
            }
        }

        int maxSize = INT_MIN;
        for (int i = 0; i < vertical.size() - 1; i++) {
            for (int j = i + 1; j < vertical.size(); j++) {
                int v = vertical[j] - vertical[i];

                if (hDiff.count(v)) {
                    maxSize = max(maxSize, v);
                }
            }
        }
        if (maxSize == INT_MIN) {
            return -1;
        }
        return (1LL * maxSize * maxSize) % 1000000007;
    }
}