class Solution {
public:
    bool hasAlternatingBits(int n) {
        int firstBit = n % 2;
        n /= 2;
        while (n) {

            if (n % 2 == firstBit) {
                return false;
            }
            firstBit = n % 2;
            n /= 2;
        }
        return true;
    }
};