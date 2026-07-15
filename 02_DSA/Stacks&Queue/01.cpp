//https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        stack<int> st;
        int halfSize = q.size()/2;
        
        //push the first half elements in stacks
        //queue: 16, 17, 18, 19, 20 || stack: 15, 14, 13, 12 ,11
        for(int i = 0; i < halfSize; i++){
            st.push(q.front());
            q.pop();
        }
        
        //Enqueue back the stack elements in queue
        //queue: 16, 17, 18, 19,AC 20, 15, 14, 13, 12, 11
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        
        //dequeue the first half elements of queue and enqueue them back
        //queue: 15, 14, 13, 12, 11, 16, 17, 18, 19, 20
        for(int i = 0; i < halfSize; i++){
            q.push(q.front());
            q.pop();
        }
        
        //again push the first half elements in stack
        //queue: 16, 17, 18, 19, 20 || stack: 11, 12, 13, 14, 15
        
        for(int i = 0; i < halfSize; i++){
            st.push(q.front());
            q.pop();
        }
        
        //interleave the elements of queue and stack
        while(!st.empty()){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
    }
};

int main(){
    
    return 0;
}