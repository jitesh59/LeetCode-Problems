class Solution {
public:
    string reverseOnlyLetters(string s) {
        string l;
        for(char c:s){
            if((c>='a' && c<='z') || (c>= 'A' && c<='Z')){
                l += c;
            }
        }
        reverse(l.begin(),l.end());
        int i=0;
        for(char &c : s){
            if((c>='a' && c<='z') || (c>='A' && c<='Z')){
                c= l[i++];
            }
        }
        return s;
    }
};