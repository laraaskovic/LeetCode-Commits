class Solution {
public:
    int hammingWeight(int n) {
        //n is in decimal
        //divide by 2 until 0


        int count = 0; //this will count the # of 1s

        while (n > 0) {
            if (n%2 == 1) {
                count++;
            }
            n /= 2;
        }

        return count;
        
    }
};