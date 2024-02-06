#include<iostream>
using namespace std;

int countGreater(int arr[], int size, int key) {
    int count = 0;
    for(int i=0; i<size; i++) {
        if(key < arr[i]) {
            count++;
        }
        
    }
    return count;

}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[7] = {1,2,3,4,5,6,7};
    int key = 4;
    cout<<"Printing array"<<endl;
    printarray(arr, 7);
    cout<<endl;
    int number = countGreater(arr, 7, 4);
    cout<<"Number of elements greater than "<<key<<" is "<<number;
   
return 0;
}