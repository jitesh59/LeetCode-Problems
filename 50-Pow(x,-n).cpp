class Solution {
public:
    double myPow(double x, int n) {
        
        // Method 1---
        // long long b=n;
        // double ans=1;
        // if(n<0){
        //     x=1/x;
        //     b = -b;
        // }
        // while(b > 0){
        //     if(b %2 == 1){
        //         ans *= x;
        //     }
        //     x *= x;
        //     b /= 2;
        // }
        // return ans;


        // method 2---
        return pow(x,n);

    
    }
};