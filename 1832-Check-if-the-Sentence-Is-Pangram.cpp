class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool arr[26];
        for(auto a:sentence){
            arr[a - 'a'] = true;
        }
        for(int i=0;i<26;i++){
            if(!arr[i]){
                return false;
            }
        }
        return true;
    }
};