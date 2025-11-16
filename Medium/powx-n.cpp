class Solution {
public:
    double myPow(double x, int n) {
        if(x==1){
            return 1;
        }
        else if(x == -1 & n%2==0){
            return 1;
        }
        else if(x == -1 && n%2==1 ){
            return -1;
        }
        if(n < 0 && n != -2147483648){
            return 1/myPow(x, -n);
        }
        else if(n < 0 && n == -2147483648){
            n = (n+1);
            return 1/(myPow(x, -n)/n);
        }
        else if(n == 0){
            return 1;
        }
        else if(n == 1){
            return x;
        }
        double half = myPow(x, n >> 1);
        double result = half * half;

        if (n & 1) {
            result *= x;
        }
        return result;
        }
};