/*
Date: 05/10/2025
CSES Problem Set
Coin Piles

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  ll a, b;
  cin>>t;

  while(t--){
    cin>>a>>b;
    if((a+b)%3==0 && 2*min(a,b)>=max(a,b)) cout<<"YES\n";
    else cout<<"NO\n";
  }
  
  return 0;
}