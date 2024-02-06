#include<iostream>
using namespace std;

int sumDifference(int arr[], int size) {
    int evenSum = 0;
    int oddSum = 0;
    int difference = 0;

    for(int i=0; i<size; i++) {
        if(i%2!= 0) {
            oddSum = oddSum + arr[i];
        }
        else {
            evenSum = evenSum + arr[i];
        }
        
    }
    difference = evenSum - oddSum;

    return difference;

}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[6] = {1,3,5,7,9,11};
    cout<<"Printing array"<<endl;
    printarray(arr, 6);
    cout<<endl;
    int answer = sumDifference(arr, 6);
    cout<<"Difference between sum of elements at even indexes to sum of elements at odd indexes is "<<answer;
   
return 0;
}