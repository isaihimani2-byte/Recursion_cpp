#include<bits/stdc++.h>
using namespace std;

 int cnt = 0;
void recur(){
  if(cnt == 4){
  return;
  }
  else{
    cout<< cnt;
    cnt ++ ;
  }
  recur();
}
int main(){
  recur();
}