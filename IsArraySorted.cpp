#include<iostream>
using namespace std;

bool isSorted(int arr[], int n) {
  for(int i=0; i<n-1; i++) {
    if(arr[i]>arr[i+1]) {
      return false;
    }
  }
  return true;
}

int main(){

  int arr1[5] = {1,2,2,3,4};
  int arr2[5] = {3,2,4,1,5};
  bool ans1 = isSorted(arr1, 5);
  bool ans2 = isSorted(arr2, 5);
  cout<<ans1<<" "<<ans2;
return 0;
}