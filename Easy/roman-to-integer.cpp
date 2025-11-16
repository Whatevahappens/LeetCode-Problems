class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        unordered_map<char, int> mp= {
            {'M', 1000}, 
            {'D', 500}, 
            {'C', 100}, 
            {'L', 50},
            {'X', 10},
            {'V', 5}, 
            {'I', 1}
        };

        for(int i = 0; i < s.length(); i++ ){
            if(i+1<s.length() && mp[s[i]] < mp[s[i+1]]){
                total-=mp[s[i]];
            }
            else{
                total+=mp[s[i]];
            }
        }
        return total;
    }
};