#include <iostream>
//#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
  for(int i = 1; i<n; i++) {
    //for round 1 to n-1
    bool swapped = false;
    for(int j = 0; j<n-i; j++) {
      //process element till (n-i)th index
      if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        swapped = true;
      }
    }
    if(swapped==false) {
      //already sorted
      break;
    }
    
  }
}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}


int main()
{
  int arr[5] = {64, 25, 12, 22, 11};
  bubbleSort(arr, 5);
  cout<<"The sorted array is: "<<endl;
  printarray(arr, 5);

  return 0;
}