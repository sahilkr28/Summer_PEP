// https://www.geeksforgeeks.org/dsa/topological-sorting-indegree-based-solution/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // Kahn's Algo
        //compute indegree of every node
        //push all the nodes with indegree = 0 in the queue
        //remove nodes one by one from queue, add to the answer
        //for each removed node, decrease the indegree if its neighbour by 1
        //if any neighbour becomes indegree == 0, push that in queue
        //if number of visited nodes != number of given vertices - cycle exist

        vector<vector<int>> adj(V);

        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }

        //create a indegree vector
        vector<int> indegree(V, 0);
        for(int i = 0; i < V; i++){
            for(int j : adj[i]){
                indegree[j]++;
            }
        }

        //push all vertices with indegree 9 in queue
        queue<int> q;
        for(int i = 0; i < V; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }

        vector<int> res;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            res.push_back(front);

            for(auto neighbour : adj[front]){
                indegree[neighbour]--;

                if(indegree[neighbour] == 0){
                    q.push(neighbour);
                }
            }
        }
        if(res.size() != V){
            return {};
        }
        return res;
    }
};