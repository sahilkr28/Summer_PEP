#include <iostream>
using namespace std;

void func1(int num){
    cout << "Value of num is: " << num <<endl; 
}

int func2(int num){
    int ans = 2 * num;
    return ans;
}

int main(){
    func1(10);
    cout << func2(20);
}