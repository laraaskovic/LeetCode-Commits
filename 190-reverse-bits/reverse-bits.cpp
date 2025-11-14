#include <cmath>  // for pow()

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t v = 0;
        int j = 31; // index for power of 2

        for (int i = 0; i < 32; i++) {
            if (n % 2 == 1) {
                v += pow(2, j);
            }
            n /= 2;
            j--;
        }

        return v;
    }
};
