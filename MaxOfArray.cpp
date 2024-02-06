#include<iostream>
using namespace std;

int max(int arr[], int size) {
    int max = arr[0];
    
    for(int i=1; i<size; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
       
    }
    return max;
}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[6] = {12,2,10,15,2,11};
    cout<<"Printing array"<<endl;
    printarray(arr, 6);
    cout<<endl;
    int answer = max(arr, 6);
    cout<<"Maximum element in array is "<<answer;
   
return 0;
}