class Solution {
public:
    int reverseBits(int n) {
        unsigned int res = 0;

        for (int i = 0; i < 32; i++) {
            res <<= 1;        // result ला space तयार
            res |= (n & 1);   // n चा last bit copy
            n >>= 1;          // n shift
        }

        return res;
    }
};
