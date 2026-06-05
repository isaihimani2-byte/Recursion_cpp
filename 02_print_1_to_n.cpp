#include<iostream>
using namespace std;

void num(int i, int n){
  if(i > n){
    return;
  }
  else{
    cout<<(i);
  }
  num(i+1,n);
}

int main(){
  int n;
  cin>> n;
  num(1,n);
}
