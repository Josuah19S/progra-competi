/*
Date: 04/10/2025
CSES Problem Set
Trailing Zeros
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, cont = 0;
  cin>>n;

  for(ll i=5; i<=n; i*=5) cont += n/i;
  cout<<cont;
  
  return 0;
}