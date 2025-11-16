class Solution {
public:
    int addDigits(int num) {
        if(num>=10){
            int total = num;
            int count = 0;
            while(total>0){
                count = count + total%10;
                total/=10;
            }
            return addDigits(count);
        }
        else{
            return num;
        }
    }
};