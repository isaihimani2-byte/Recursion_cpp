#include<iostream>
using namespace std;

void bnum(int i ,int n){
  if(i<1){
    return;
  }
  else{
    bnum(i-1, n);
    cout<<(i);
  }
}
int main(){
  int n;
  cin >> n;
  bnum(n,n);
}