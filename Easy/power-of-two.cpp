class Solution {
public:
    bool isPowerOfTwo(int n) {
        int k = 1;
        while(n > k && n<=(2147483648/2)){
            k = k<<1;
        }
        if(k == n){
            return true;
        }
        else{
            return false;
        }
    }
};