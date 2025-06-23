class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> inDegree(numCourses, 0);        // \U0001f4e5 Tracks how many prereqs
        unordered_map<int, vector<int>> adj;        // \U0001f517 Graph: prereq → courses

        // \U0001f9f1 Step 1: Build Graph & In-Degree Array
        for (auto& p : prerequisites) {
            int course = p[0], prereq = p[1];
            adj[prereq].push_back(course);          // prereq → course
            inDegree[course]++;
        }

        queue<int> q;  // \U0001f6aa Courses ready to take

        // \U0001f9fe Step 2: Add courses with 0 prerequisites
        for (int i = 0; i < numCourses; ++i) {
            if (inDegree[i] == 0) q.push(i);
        }

        int count = 0; // \U0001f9ee Courses we can finish

        // \U0001f501 Step 3: BFS
        while (!q.empty()) {
            int curr = q.front(); q.pop();
            count++; // \U0001f3af One more course finished!

            for (int next : adj[curr]) {
                inDegree[next]--;
                if (inDegree[next] == 0) q.push(next);
            }
        }

        // ✅ Step 4: If we finished all courses
        return count == numCourses;
    }
};
