class Solution {
public:
    bool isPowerOfThree(int n) {
        int mp = pow(3,19);
        return n>0 && mp % n == 0;
    }
};