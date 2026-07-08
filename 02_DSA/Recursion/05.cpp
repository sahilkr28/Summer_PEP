#include<iostream>
using namespace std;

void wavePrint(int arr[][3], int row, int col){
    for(int i = 0; i < 3; i++){
        if(i % 2 == 0){
            for(int j = 0; j < 3; j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(int j = 2; j >= 0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}

int main(){
    int arr[3][3] = {2,7,3,8,4,10,12,6,5};

    wavePrint(arr, 3, 3);
    return 0;
}