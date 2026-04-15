class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {

        if (words[startIndex] == target) {
            return 0;
        }
        int dist = 0;
        int n = words.size();

        int count = n;

        int l = startIndex + n - 1;
        int r = startIndex + n + 1;
        while (count) {
            l %= n;
            r %= n;
            cout << l << " " << words[l] << " " << r << " " << words[r] <<"\n";
            dist++;
            if (words[l--] == target || words[r++] == target) {
                return dist;
            }
            
            l += n;
            r += n;
            count--;
        }
        return dist >= n ? -1 : dist;
        
    }
};