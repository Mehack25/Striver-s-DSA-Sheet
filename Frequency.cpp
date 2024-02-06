#include<iostream>
using namespace std;

void input(int size, int arr[]) {
    cout<<"Enter elements oa array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

void frequency(int arr[], int size) {
    
     for (int i=0; i<size; i++){
        int count = 0;
    
        for(int j=0; j<size; j++){
           if(arr[i]==arr[j]){
            count++;
        }
        
    }
    cout<<"Frequency of "<<arr[i]<<" is:"<<count<<endl;
    
}
}
void printarray(int arr[], int size) {
    cout<<"Print array"<<endl;
    for(int i=0; i<size; i++){
        cout<<arr[i];
        }
        cout<<endl;
        
}

int main() {
    int size;
    cout<<"Enter size:"<<endl;
    cin>>size;
    int arr[size];
    input(size, arr);
    printarray(arr, size);
    frequency(arr, size);
    
return 0;
}