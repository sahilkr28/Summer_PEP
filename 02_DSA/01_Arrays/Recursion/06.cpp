#include<iostream>
using namespace std;

void spiralPrint(int arr[][3], int row, int col){
    int topRow = 0;
    int bottomRow = row - 1;
    int leftCol = 0;
    int rightCol = col - 1;

    while(topRow <= bottomRow && leftCol <= rightCol){
        //print top row
        for(int i = leftCol; i <= rightCol; i++){
            cout<<arr[topRow][i]<<" ";
        }
        topRow++;

        //print right Col
        for(int i = topRow; i <= bottomRow; i++){
            cout<<arr[i][rightCol]<<" ";
        }
        rightCol--;

        //print bottom row
        for(int i = rightCol; i >= leftCol; i--){
            cout<<arr[bottomRow][i]<<" ";
        }
        bottomRow--;

        //print left col
        for(int i = bottomRow; i >= topRow; i--){
            cout<<arr[i][leftCol]<<" ";
        }
        leftCol++;
    }
}

int main(){
    int arr[3][3] = {2,7,3,8,4,10,12,6,5};

    spiralPrint(arr, 3, 3);
    return 0;
}