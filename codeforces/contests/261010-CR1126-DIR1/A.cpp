/*
Date: 10/10/2026
A. Robot Odd Moves
Pretests passed (3)
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, a, b;
  cin>>t;

  while(t--){
    cin>>a>>b;

    if(b > a+1) cout<<-1;
    else if(a%2 == b%2) cout<<a;
    else cout<<a+1;

    cout<<"\n";
  }
  
  return 0;
}