class Solution {
public:
    static bool comp(int &x, int &y) {
        if (__builtin_popcount(x) == __builtin_popcount(y)) {
            return x < y;
        }
        return __builtin_popcount(x) < __builtin_popcount(y);
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comp);
        return arr;
    }
};