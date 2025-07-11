class Solution {
public:
    int romanToInt(string s) {
       int num = 0;
       unordered_map<char,int> storeIntRoman{
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000},
    };
        for (int i = 0; i < s.size(); i++) {
            if(storeIntRoman[s[i]] < storeIntRoman[s[i+1]])
            num = num - storeIntRoman[s[i]];
            else
            num += storeIntRoman[s[i]];
            }
             return num;
        }
};