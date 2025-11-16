class Solution {
    public int reverse(int x) {
        int mod = 0, rev = 0;
            while(x!=0){
                if(rev < Integer.MIN_VALUE/10 || rev > Integer.MAX_VALUE/10){
                return 0;
                }
            mod = x%10;
            x = x/10;
            rev = rev*10 + mod;
            }
            return rev;
    }
}