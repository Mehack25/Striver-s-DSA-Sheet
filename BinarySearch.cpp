#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2 ;
    
    while(start <= end) {
    
      if (key == arr[mid]) {
          return mid;
      }
      if (key > arr[mid]) {
          start = mid+1;
          
      }
      else {
          end = mid-1;
      }
      mid = start + (end-start)/2 ;

    }
return -1;
}

int main()
{
    int arr[6] = {3,7,11,13,19,27};
    int key;
    cout<<"Enter key"<<endl;
    cin>>key;
    int search = binarySearch(arr, 6, key);
    cout<<"Index of key is: "<<search;

    return 0;
}
/* mid = (start+end)/2
mid = (start + end/2 - start/2 )if both start and end are (2^31)-1 
mid = start + (end-start)/2 */
