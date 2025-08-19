class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
            for(int i =0; i<n; i++){
                int start=0, end = n-1;
                while(start < end){
                swap(matrix[start][i], matrix[end][i]);
                start++;
                end--;
            }
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};