class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>ar;
        for(auto i : arr){
            mp[i]++;
        }
        for(auto i : mp){
            ar.insert(i.second);
        }
        return mp.size() == ar.size();
    }
};