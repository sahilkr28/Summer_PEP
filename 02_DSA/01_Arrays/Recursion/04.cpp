#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {2,7,3,8,4,10,12,6,5};
    int maxSum = 0;
    for(int i = 0; i < 3; i++){
        int sum = 0;
        
        for(int j = 0; j < 3; j++){
            sum+=arr[j][i];
            maxSum = max(sum, maxSum);
        }
        cout<<sum<<endl;
    }
    cout<<"Max Sum: "<<maxSum;
    return 0;
}