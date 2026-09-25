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
        // return pow(x,n);

        // method 3--
        if(n==0) return 1.0;
        if(x==0) return 0.0;
        if(x==1) return 1.0;
        if(x ==-1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 !=0) return -1.0;
        long binform = n;
        if(n<0){
            x =1/x;
            binform = -binform;
        }
        double ans =1;
        while (binform > 0 ){
            if(binform % 2 == 1){
                ans *= x;
            }
            x *= x;
            binform /= 2;
        }
        return ans;
    
    }
};