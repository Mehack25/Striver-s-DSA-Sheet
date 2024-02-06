#include<iostream>
using namespace std;

int secondMax(int arr[], int size) {
    int max = arr[0];
    int smax = arr[0];

    for(int i=0; i<size; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
        if(smax < arr[i] && arr[i]!= max) {
            smax = arr[i]; 
    }
       
    }
    return smax;
}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[6] = {1,2,10,7,2,11};
    cout<<"Printing array"<<endl;
    printarray(arr, 6);
    cout<<endl;
    int answer = secondMax(arr, 6);
    cout<<"Second maximum element in array is "<<answer;
   
return 0;
}