class Solution {
public:
    bool isPowerOfThree(int n) {

        // method 1
        int mp = pow(3,19);
        return n>0 && mp % n == 0;


        // // method 2
        // if(n==1){
        //     return true;
        // }
        // // int ans=1;
        // for(int i=0;i<19;i++){
        //     int ans=pow(3,i);
        //     if(ans  == n){
        //         return true;
        //     }
        //     if(ans >n){
        //         return false;
        //     }
        // }
        // return false;
    }
};