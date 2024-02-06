#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int n) {
      int count = 0;
      int maxi = 0;
      for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
          count++;
        } 
        else {
          count = 0;
        }

        maxi = max(maxi, count);
      }
      return maxi;
  
}


int main() {
  int arr[6] = { 1, 1, 0, 1, 1, 1 };
  int ans = findMaxConsecutiveOnes(arr, 6);
  cout << "The maximum  consecutive 1's are " << ans;
  return 0;
}