#include<iostream>
using namespace std;

string reverseString(string s){
    int i = 0;
    int j = s.length() - 1;

    while(i < j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int main(){
    string str = "Hello";
    cout<<reverseString(str)<<endl;
}