class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(char c: s){
            if(c>='A' && c<='Z'){
                c=c+32;
            }
            if((c>='a' && c<= 'z') || (c>='0' && c<= '9')){
                a += c;
            }
        }
        string r=a;
        reverse(r.begin(),r.end());
        return a==r;
    }
};