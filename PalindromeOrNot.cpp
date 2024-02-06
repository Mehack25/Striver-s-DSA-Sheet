#include<iostream>
using namespace std;

char toLowerCase(char ch) {       //converts uppercase to lowercase
  if(ch>='a' && ch<='z'){
    return ch;
  }
  else {
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

bool checkPalindrome(char str[], int n) {
  
  int s = 0;
  int e = n-1;

  while(s<e) {
    if(toLowerCase(str[s]) != toLowerCase(str[e])) {
      return 0;
    }
    else {
      s++;
      e--;
    }
  }
  return 1;
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
  cout<<"Palindrome or not: "<<checkPalindrome(name, len)<<endl;
  return 0;
}