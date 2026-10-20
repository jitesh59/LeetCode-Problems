class Solution {
public:
    bool judgeSquareSum(int c) {
        // method 1--
        for(long long a = 0; a * a <= c; a++) {
            long long b = sqrt(c - a * a);
            if(b * b == c - a * a)
                return true;
        }
        return false;

        // method 2---
        // long long i = 0, j = sqrt(c);
        // while(i <= j) {
        //     long long sum = i*i + j*j;
        //     if(sum == c) return true;
        //     else if(sum < c) i++;
        //     else j--;
        // }
        // return false;
    }
};