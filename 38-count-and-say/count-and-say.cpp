class Solution {
public:
    string countAndSay(int n) {
       string curr = "1";
       for(int k=1; k<n; k++){
        string next = "";
        int i=0;
        while(i < curr.length()){
            int currcharcount = 1;
            while(i < curr.length()-1 && curr[i] == curr[i+1]){
                currcharcount += 1;
                i = i+1; 
            }
            next += to_string(currcharcount) + curr[i];
            i= i+1 ;
        } 
        curr = next;
       }
       return curr;
    }
};