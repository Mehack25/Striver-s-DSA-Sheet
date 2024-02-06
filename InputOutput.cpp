#include<iostream>
using namespace std;

void input(int size, int arr[]) {
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

void printarray(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout<<arr[i];
        }
}

int main() {
    int arr[8];
    input(8, arr);
    printarray(arr, 8);
return 0;
}