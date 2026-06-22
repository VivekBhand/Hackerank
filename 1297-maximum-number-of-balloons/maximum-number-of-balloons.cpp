class Solution {
public:
    int maxNumberOfBalloons(string text) {


        int n = 0;
        vector<int> v(26, 0);

        for (auto c : text) {
            v[c - 'a']++;
        }
        n = v['b' - 'a'];

        n = min(n, v['a' - 'a']);
        n = min(n, v['l' - 'a']/2);
        n = min(n, v['o' - 'a']/2);
        n = min(n, v['n' - 'a']);

        return n;
    }
};