//https://leetcode.com/problems/asteroid-collision/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for (int i : asteroids) {
            bool destroyed = false;

            while (!st.empty() && st.top() > 0 && i < 0) {
                int topVal = st.top();

                if (abs(topVal) < abs(i)) {
                    st.pop();
                }
                else if (abs(topVal) > abs(i)) {
                    destroyed = true;
                    break;
                }
                else {
                    st.pop();
                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                st.push(i);
            }
        }

        vector<int> ans(st.size());

        for (int i = static_cast<int>(st.size()) - 1; i >= 0; i--) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};

int main(){
    
    return 0;
}