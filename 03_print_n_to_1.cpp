#include<iostream>
using namespace std;

void brnum(int i,int n){
  if(i>n)
  return;
  else{
    
    cout<<n<<endl;
  }
  brnum(i, n-1);
}
int main(){
  int n;
  cin >> n;
  brnum(1,n);
}