#include<iostream>
using namespace std;

void rotate(int arr[], int size, int  k) {
    int i = 0;
    while(k) {
        arr[size - i -1] = arr[k-1-i];
        i++;
        k--;
    }
    return;
}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[7] = {1,2,3,4,5,6,7};
    int k =3;
    cout<<"Actual array"<<endl;
    printarray(arr, 7);
    cout<<endl;

    rotate(arr, 7, 3);
    cout<<"Rotated Array by 3"<<endl;
    printarray(arr, 7);
return 0;
}