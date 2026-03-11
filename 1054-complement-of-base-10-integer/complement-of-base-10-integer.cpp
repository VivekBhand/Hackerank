class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0;
        int exp = 0;
        if (n == 0) {
            return 1;
        }
        while (n) {
            
            ans = ans +  (n%2 ? 0 : 1)*pow(2, exp++);
            n /= 2;
        }
        return ans;
    }
};