#include <iostream>
using namespace std;

int missingNumber(int arr[], int N) {

    //Summation of first N numbers:
    int sum = (N * (N + 1)) / 2;

    //Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += arr[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main()
{
    int N = 5;
    int arr[4] = {1, 2, 4, 5};
    int ans = missingNumber(arr, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}