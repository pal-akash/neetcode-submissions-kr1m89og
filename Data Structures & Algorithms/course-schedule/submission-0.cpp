class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        vector<int> inDegree(numCourses, 0);

        for(auto& pre: prerequisites){
           inDegree[pre[1]]++;
           graph[pre[0]].push_back(pre[1]);
        }

        queue<int> q;
        for(int i=0; i<numCourses; ++i){
            if(inDegree[i] == 0){
                q.push(i);
            }
        }

        int count = 0;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            count++;
            for(int next: graph[curr]){
                inDegree[next]--;
                if(inDegree[next] == 0){
                    q.push(next);
                }
            }
        }

        return count == numCourses;

    }
};
