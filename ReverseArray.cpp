#include<iostream>
using namespace std;

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[7] = {1,2,3,4,5,6,7};
    cout<<"Actual array"<<endl;
    printarray(arr, 7);
    cout<<endl;

    for(int i=0; i<7/2; i++) {
        swap(arr[i],arr[7 - (i+1)]);
    }
    cout<<"Reverse Array"<<endl;
    printarray(arr, 7);
return 0;
}