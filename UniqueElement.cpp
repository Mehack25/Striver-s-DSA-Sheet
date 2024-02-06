#include<iostream>
using namespace std;

int uniqueElement(int arr[], int size) {
    int unique = 0;
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i]!= arr[j]) {
               unique = arr[i];
            }
        }
    }
    return unique;
}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[7] = {1,2,3,4,3,2,1};
    cout<<"Array"<<endl;
    printarray(arr, 7);
    cout<<endl;
    int single = uniqueElement(arr, 7);
    cout<<"Unique element is: "<<single;

return 0;
}