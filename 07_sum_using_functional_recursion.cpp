#include<iostream>
using namespace std;

int num(int n){
  if(n == 0){
  return;
  }
  {
    return n + num(n - 1);
}
  num(n);
}
int main(){
  int n;
  cin >> n;
  cout<<num(n);
}