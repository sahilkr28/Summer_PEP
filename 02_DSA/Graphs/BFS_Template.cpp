// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    //create a visited array to keep track of visited nodes
    //create a queue for BFS traversal
    //start from any node(lets say 0), mark it visited and push it in the queue
    //while(!q.empty()){
        //remove the front node
        //add it to answer
        //visit all unvisited neighbours, mark them visited and push them in queue
        //return the BFS traversal
    //}
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int V = adj.size();

        vector<int> bfsResult; //store the BFS traversal
        vector<bool> visited(V, false);
        
        queue<int> q;
        //start bfs for node 0
        q.push(0);
        visited[0] = true;
        
        //continue until all reachable nodes are visited
        
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            
            //add cuurent node in ans
            bfsResult.push_back(frontNode);
            
            //visit all neighbours of current node
            for(auto neighbour : adj[frontNode]){
                if(!visited[neighbour]){
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
        return bfsResult; 
    }
};
