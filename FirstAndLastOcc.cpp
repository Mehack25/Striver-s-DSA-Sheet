#include <iostream>

using namespace std;

int firstOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2 ;
    int ans = -1;
    
    while(start <= end) {
    
      if (key == arr[mid]) {
          ans = mid;
          end = mid - 1;
          
      }
      else if (key > arr[mid]) {
          start = mid+1;
          
      }
      else {
          end = mid-1;
      }
      mid = start + (end-start)/2 ;

    }
return ans;
}

int lastOcc(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2 ;
    int ans = -1;
    
    while(start <= end) {
    
      if (key == arr[mid]) {
          ans = mid;
          start = mid + 1;
            
      }
      else if (key > arr[mid]) {
          start = mid+1;
          
      }
      else {
          end = mid-1;
      }
      mid = start + (end-start)/2 ;

    }
return ans;
}

int main()
{
    int arr[5] = {1,2,3,3,5};
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    cout<<"First occurrence of key is at index: "<<firstOcc(arr, 5, key)<<endl;
    cout<<"Last occurrence of key is at index: "<<lastOcc(arr, 5, key);

    return 0;
}