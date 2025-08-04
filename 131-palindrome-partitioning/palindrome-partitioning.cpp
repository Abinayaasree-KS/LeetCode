class Solution {
private:
    void find(int ind, string s, vector<string>& path, vector<vector<string>>& res){
        if(ind == s.size()){
            res.push_back(path);
        }
        for(int i = ind; i<s.size(); i++){
            if(isPalindrome(s,ind, i)){
                path.push_back(s.substr(ind, i- ind +1));
                find(i+1, s, path, res);
                path.pop_back();
            }
        }
    }
    bool isPalindrome(string s,int start, int end){
        while(start<= end){
        if(s[start++] != s[end--]){
            return false;
        }
        }
        return true;
    };
public:
    vector<vector<string>> partition(string s) { 
        vector<string> path;
        vector<vector<string>> res;
        find(0, s, path, res);
        return res;
    }
};