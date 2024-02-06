#include<iostream>
using namespace std;

void input(int size, int arr[]) {
    cout<<"Enter elements oa array"<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
}

int search(int key, int arr[], int size) {
    for(int j=0; j<size; j++){
        if(key==arr[j]){
          return j;
        }
        
    }
    return -1;
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
    int key;
    cout<<"Enter Key:"<<endl;
    cin>>key;
    int getSearch = search(key, arr, size);
    cout<<"Index: "<<getSearch<<endl;
return 0;
}