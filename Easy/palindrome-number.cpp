class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> first, last;
        int f,l;
        int counter=0;
        string stringx = to_string(x);
        for(int i = 0 ; i < stringx.size() / 2; i++){
            if(stringx[i]!=stringx[stringx.size()-i-1]){
                return false;
                break;
            }
        }
        return true;
    }
};