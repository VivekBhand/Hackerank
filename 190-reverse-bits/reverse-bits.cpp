class Solution {
public:
    int reverseBits(int n) {
        vector<int> bits(32);
        int i = 0;
        while (n) {
            bits[i++] = n % 2;
            cout << n % 2 << " ";
            n /= 2;
        }

        n = 0;

        for (int j = 0; j < i; j++) {
            n = n + bits[j] * pow(2, 31 - j);
        }
        return n;

    }
};