#include<iostream>
using namespace std;

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[8] = {1,2,3,4,5,6,7,8};
    cout<<"Array before changes"<<endl;
    printarray(arr, 8);
    cout<<endl;

    for(int i=0; i < 8; i++) {

        if(i%2!= 0) {
            arr[i] = arr[i] * 2;   
        }

        else {
            arr[i] = arr[i] + 10;
        }

    }

    cout<<"Array after changes"<<endl;
    printarray(arr, 8);


return 0;
}