class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {

        int foundAt = INT_MAX;
        int n = words.size();
        for (int i = 0; i < n; i++) {
            if (words[i] == target) {
                int temp = (i - startIndex + n) % n;
                temp = min(temp, (startIndex - i + n) % n);
                foundAt = min(foundAt, temp);
            }
        }
        if (foundAt == INT_MAX) {
            return -1;
        }
        return foundAt;
        
    }
};