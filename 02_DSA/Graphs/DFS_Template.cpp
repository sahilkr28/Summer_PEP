// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    //create a visited array to keep track of visited nodes
    //start DFS from node 0
    //mark cuurent node as visited and add it to the ans
    //visit all unvisited neighbour recursively
    //when all recursive calls finish, return the DFS traversal
    
    void dfsHelper(int node, vector<vector<int>> &adj, vector<bool> &visited,
    vector<int> &res){
        //mark the current node as visited
        visited[node] = true;

        //add current node to DFS traversal
        res.push_back(node);

        //visit all unvisited neighbours
        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                dfsHelper(neighbour, adj, visited, res);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V = adj.size();
        vector<bool> visited(V, false);

        vector<int> res;

        dfsHelper(0, adj, visited, res);
        return res;
    }
};