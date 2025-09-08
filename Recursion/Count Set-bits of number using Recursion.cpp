int cntSetBits(int n) {
    if (n == 0) return 0;           // base case
    if (n & 1) {                    // if last bit is 1
        return 1 + cntSetBits(n >> 1);
    } else {                        // if last bit is 0
        return cntSetBits(n >> 1);
    }
}
