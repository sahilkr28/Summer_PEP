// https://leetcode.com/problems/number-of-provinces/description/

#include<bits/stdc++.h>
using namespace std;

void dfsHelper(int city, vector<vector<int>> &isConnected, vector<bool> &isVisited){
    isVisited[city] = true;

    for(int neighbour = 0; neighbour < isConnected.size(); neighbour++){
        if(isConnected[city][neighbour] == 1 && !isVisited[neighbour]){
            dfsHelper(neighbour, isConnected, isVisited);
        }
    }
}

int findCircleNum(vector<vector<int>> &isConnected){
    int n = isConnected.size();
    vector<bool> isVisited(n, false);
    int provienceCount = 0;

    for(int i = 0; i < n; i++){
        if(isVisited[i]){
            dfsHelper(i, isConnected, isVisited);
            provienceCount++;
        }
    }
    return provienceCount;
}