#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};

    // cout<<arr[3]<<endl;
    // cout<<arr[10]<<endl;

    for(int i = 0; i < 5; i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

    for(int i : arr){
        cout<<i<<" ";
    }
}