#include<iostream>
using namespace std;

int duplicateElement(int arr[], int size) {
    int duplicate = 0;
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[j] == arr[i]) {
               duplicate = arr[i];
            }
        }
    }
    return duplicate;
}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[7] = {1,2,1,4,5,6,7};
    cout<<"Array"<<endl;
    printarray(arr, 7);
    cout<<endl;
    int copy = duplicateElement(arr, 7);
    cout<<"Duplicate element is: "<<copy;

return 0;
}