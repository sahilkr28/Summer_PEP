#include <iostream>
#include <string>
#include <vector>
using namespace std;


string removeDuplicates(string &s) {
    // code here
    vector<bool> seen(256, false);
    
    string ans = "";
    
    for(char ch : s){
        if(!seen[ch]){
            ans += ch;
            seen[ch] = true;
        }
    }
    return ans;
}

int main(){
    string str = "HaPpyNewYear";

    cout<<removeDuplicates(str)<<endl;
}