class Solution {
public:
   vector<int> killProcess(vector<int>& pid, vector<int>& ppid, int kill) {
      map<int, vector<int> > child;
      int n = pid.size();
      vector<int> ret;
      for (int i = 0; i < n; i++) {
         int u = ppid[i];
         int v = pid[i];
         child[u].push_back(v);
      }
      queue<int> q;
      q.push(kill);
      while (!q.empty()) {
         int curr = q.front();
         q.pop();
         ret.push_back(curr);
         for (int i = 0; i < child[curr].size(); i++) {
            q.push(child[curr][i]);
         }
      }
      return ret;
   }
};

//LeetCode Link: https://leetcode.com/problems/kill-process/
//Time: O(n)
//Space: O(n)
