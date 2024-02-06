#include<iostream>
using namespace std;

//Not the best approach, can be solved using hashmap.

int NoOfTriplets(int arr[], int size, int key) {
    int count = 0;
    cout<<"Triplets are "<<endl;
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            for(int k=j+1; k<size; k++) {
                if(arr[i]+arr[j]+arr[k] == key) {
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[k]<<")"<<endl;
                count++;
            }

            }
            
        }
        
    }
    return count;

}

void printarray(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}

int main() {

    int arr[8] = {1,2,3,4,5,6,7,8};
    int key = 12;
    cout<<"Printing array"<<endl;
    printarray(arr, 7);
    cout<<endl;
    int triplets = NoOfTriplets(arr, 8, 12);
    cout<<"Number of  of elements whose sum is equal to "<<key<<" is "<<triplets;
   
return 0;
}