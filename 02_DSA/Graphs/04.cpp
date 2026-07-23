// https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    bool dfsHelper(int startNode, vector<vector<int>> &adj, vector<bool> &visited,
    vector<bool> &recursive){
        visited[startNode] = true;
        recursive[startNode] = true;

        for(int neighbour : adj[startNode]){
            if(!visited[neighbour]){
                if(dfsHelper(neighbour, adj, visited, recursive)){
                    return true;
                }
            }else if(recursive[neighbour]){
                return true;
            }
        }
        recursive[startNode] = false;
        return false;
    }

    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto i : edges){
            int u = i[0];
            int v = i[1];
            
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V, false);
        vector<bool> recursive(V, false);
        
        for(int i = 0; i < V; i++){
            //call dfsHelper
            if(dfsHelper(i, adj, visited, recursive)){
                return true;
            }
        }
        return false;
    }
};