/*
Date: 25/09/2025
CSES Problem Set
Bit Strings
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

const ll MOD = 1e9 + 7;

ll modpow(ll base, ll exp) {
  ll result = 1;
  while(exp>0) {
    if(exp & 1) result = (result * base) % MOD;
    base = (base * base) % MOD;
    exp >>= 1;
  }
  return result;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n;
  cin>>n;
  cout<<modpow(2, n);
  
  return 0;
}