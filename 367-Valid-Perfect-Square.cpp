class Solution {
public:
    bool isPerfectSquare(int num) {

        // // shortcut but as per q not to use sqrt lib
        // int i=sqrt(num);
        // return i*i == num;

        // method 2--
        for(long long i=1;i*i <= num;i++){
            if(i * i == num) {
                return true;
            }
        }
        return false;

    }
};