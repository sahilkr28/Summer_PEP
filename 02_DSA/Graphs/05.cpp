//https://leetcode.com/problems/flood-fill/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int r, int c, vector<vector<int>>& image, int orgColor, int newColor){
        int n = image.size();
        int m = image[0].size();

        if(r < 0 || r >= n || c < 0 || c >= m) return;
        if(image[r][c] != orgColor) return;
        image[r][c] = newColor;

        //top
        dfs(r-1, c, image, orgColor, newColor);
        //bottom
        dfs(r+1, c, image, orgColor, newColor);
        //left
        dfs(r, c-1, image, orgColor, newColor);
        //right
        dfs(r, c+1, image, orgColor, newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orgColor = image[sr][sc];
        if(orgColor == color) return image;
        dfs(sr, sc, image, orgColor, color);
        return image;
    }
};