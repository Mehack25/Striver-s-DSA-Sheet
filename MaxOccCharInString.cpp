#include<iostream>
using namespace std;

char maxChar(char str[], int length) {
  int arr[26] = {0};
  
  for(int i=0; i<length; i++) {
    int ch = str[i] - 'a';
    arr[ch]++;    
  }

  int max = arr[0];
  int maxi=0;
  for(int j=1; j<26; j++) {
    
    if(max<arr[j]) {
      max = arr[j];
      maxi=j;
    }
  }
  char cha = maxi + 'a';
  return cha;
}

char toLowerCase(char ch) {
  if(ch>='a' && ch<='z'){
    return ch;
  }
  else {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

int getLength(char name[]) {
  int count = 0;
  for(int i = 0; name[i] != '\0'; i++) {
    count++;
  }
  return count;
}

int main() {
  char name[10];
  cout<<"Enter your name"<<endl;
  cin>>name;
  cout<<"Your name is ";
  cout<<name<<endl;
  int len = getLength(name);
  cout<<"\nMax Char is: "<<maxChar(name, len);
  return 0;
}