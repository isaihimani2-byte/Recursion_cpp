#include<iostream>
using namespace std;

bool f(int i, int n, string s){
if(i>=n/2){
  return true;
}
{
  if(s[i] != s[n-i-1]){
    return false;

    return f(i+1, n, s);
  }
}
}
int main(){
  string s;
  cin >> s;

  cout << f(0,s.length(), s);
  return 0;
  
}