class Solution {
public:
    int maxNumberOfBalloons(string text) {


        int n = 0;
        unordered_map<char, int>v;

        for (auto c : text) {
            v[c]++;
        }
        n = v['b'];

        n = min(n, v['a']);
        n = min(n, v['l']/2);
        n = min(n, v['o']/2);
        n = min(n, v['n']);

        return n;
    }
};