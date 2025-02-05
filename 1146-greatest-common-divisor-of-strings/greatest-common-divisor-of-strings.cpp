class Solution {
public:
    int findGCD(int a, int b){
        while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
        }
        return a;
    }
    string gcdOfStrings(string str1, string str2) {
        int l1 = str1.size(); 
        int l2 = str2.size();
        if(str1 + str2 != str2 + str1){
            return "";
        }
        int GCDlength = findGCD(l1,l2);
        return str1.substr(0,GCDlength);
    }
};