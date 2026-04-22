class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string> ans;
        
        for (auto query : queries) {
            for (auto word : dictionary) {
                int num = 0;
                int n = query.size();
                for (int k = 0; k < n; k++) {
                    if (query[k] != word[k]) {
                        num++;
                    }
                }
                if (num <= 2) {
                    ans.push_back(query);
                    break;
                }
            }
        }
        return ans;
    }
};