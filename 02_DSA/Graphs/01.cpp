#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int m;

    cout<<"Enter the number of vertices: "<<endl;
    cin>>n;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;

    unordered_map<int, list<int>> adjList;
    cout<<"Enter edges (u, v): "<<endl;

    for(int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);     
        adjList[v].push_back(u);
    }

    cout<<"Adj list is: "<<endl;
    for(auto i : adjList){
        cout<<i.first<<" -> ";
        for(auto j : i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}