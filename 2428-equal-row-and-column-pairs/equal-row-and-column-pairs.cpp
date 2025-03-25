class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
         int n = grid.size();
        int count=0;
         map <vector<int> , int> freq;

        //store rows in hash map
        for(vector row : grid) freq[row]++; //O(N^2 * log N)
        
        //iterate over columns to find equal rows & cols pairs
        for(int c=0; c<n; c++){  // -> O(N)
            vector<int> col;

            for(int r=0; r<n; r++){     // -> O(N)
                col.push_back(grid[r][c]); 
            }

            count += freq[col];
        } //O(N^2)

        return count;
    }
};