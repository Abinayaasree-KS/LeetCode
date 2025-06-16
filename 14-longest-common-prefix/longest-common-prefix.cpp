class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string str1 = strs[0];
        string str2 = strs[n-1];
        int i=0;
        while(i<str1.length() && i<str2.length()){
            if(str1[i] == str2[i]){
                i++;
            }
            else
                break;
        }
        return i==0?"":str1.substr(0, i);
    }
};