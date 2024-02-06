#include<iostream>
using namespace std;

void rotateArray(int arr[], int n) {
  int temp = arr[0];
  for(int i=1; i<n; i++) { 
      arr[i-1] = arr[i];
    }
  arr[n-1] = temp;
}
void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {
  int arr[5] = {1,2,3,4,5};
  cout<<"Array Before: ";
  printarray(arr,5);
  cout<<endl;
  rotateArray(arr,5);
  cout<<"Array After: ";
  printarray(arr,5);
return 0;
}