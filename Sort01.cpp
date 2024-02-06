#include<iostream>
using namespace std;

void sort01(int arr[], int size) {
    int i = 0;
    int j = size-1;
    while(i<j){
      
      
      if(arr[i]==0){
        i++;
      }
      if(arr[i]==1 && arr[j]==0){
        swap(arr[i],arr[j]);
        i++;
        j--;
      }
      
      
      if(arr[j]==1){
        j--;
      }
      
    }
  
}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[6] = {0,1,0,1,0,1};
    cout<<"Original Array: ";
    printarray(arr,6);
    cout<<endl;
    cout<<"Sorted Array: ";
    sort01(arr, 6);
    printarray(arr,6);

return 0;
}