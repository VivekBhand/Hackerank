class Fancy {
    const long MOD = 1e9 + 7;
    vector<long> stored;
    long M, A; // cumulative mult and add
    int n;

    long power(long base, long exp, long mod) {
        long result = 1;
        base %= mod;
        while (exp > 0) {
            if (exp & 1) result = result * base % mod;
            base = base * base % mod;
            exp >>= 1;
        }
        return result;
    }

    long modInverse(long x) {
        return power(x, MOD - 2, MOD); // Fermat's little theorem
    }

public:
    Fancy() : M(1), A(0), n(0) {}

    void append(int val) {
        // stored[i] such that stored[i]*M + A = val
        long s = (val - A % MOD + MOD) % MOD * modInverse(M) % MOD;
        stored.push_back(s);
        n++;
    }

    void addAll(int inc) {
        A = (A + inc) % MOD;
    }

    void multAll(int m) {
        M = M * m % MOD;
        A = A * m % MOD;
    }

    int getIndex(int idx) {
        if (idx >= n) return -1;
        return (stored[idx] * M % MOD + A) % MOD;
    }
};