#include<iostream>
using namespace std;

void rowWiseSum(int arr[][3], int r, int c){
  for(int i = 0; i<r; i++) {
      int sum = 0;
      for(int j = 0; j<c; j++) {
        sum = sum + arr[i][j];           
    }
    cout<< sum<<" ";
  }
}

int main(){
  int arr[3][3]={{3,4,11}, {2,12,1}, {7,8,7}};
  rowWiseSum(arr, 3, 3);
  return 0;
}