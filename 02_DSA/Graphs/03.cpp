// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool bfsHelper(int startNode, vector<vector<int>> &adj, vector<bool> &visited){
        queue<int> q;
        unordered_map<int, int> parent;
        
        visited[startNode] = true;
        q.push(startNode);
        parent[startNode] = -1;
        
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            
            for(int neighbour : adj[frontNode]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                    parent[neighbour] = frontNode;
                }else if(parent[frontNode] != neighbour){
                    return true;
                }
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<bool> visited(V, false);
        
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                //call BFSHelper
                if(bfsHelper(i, adj, visited)) return true;
            }
        }
        return false;
    }
};
