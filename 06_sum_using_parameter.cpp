#include<iostream>
using namespace std;

void sumN(int i,int sum){
  if(i<1){
    cout<<(sum);
    return;
  }
  else{
    sumN(i-1, sum+i);
  }
}
int main(){
  int n;
  cin >> n;
  sumN(n,0);
}