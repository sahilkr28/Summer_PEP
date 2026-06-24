//Vectors

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1;
    vec1.push_back(10);

    for(int i : vec1){
        cout << i << " ";
    }
    cout<<endl;
    vec1.pop_back();
    cout<<"Size of the vector: "<<vec1.size()<<endl;
    vec1.clear();
    cout<<"Size of the vector after clear: "<<vec1.size()<<endl;
}