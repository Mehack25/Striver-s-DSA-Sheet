#include <iostream>

using namespace std;

long long int squareRoot(int n)
{
   
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    long long int ans = -1;

    while (s < e) {
        long long int square = mid*mid;

        if (square == n) {
          return mid;
        }
        if(square < n) {
          ans = mid;
          s = mid+1;
        }
        else {
          e = mid-1;
        }
      mid = s + (e - s) / 2;
    }
  return ans;
}

int main()
{
    int n = 36;
    int arr[n+1];
    for(int i = 0; i<= n; i++){
      arr[i]=i;
    }
    //for(int i = 0; i<= n; i++){
      //cout<<arr[i]<<" ";
    //}
    cout<<"Square Root of "<<n<<" is: "<<squareRoot(n)<<endl;

    return 0;
}