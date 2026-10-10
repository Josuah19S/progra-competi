/*
Date: 09/10/2026
D - Transporting Cargo
AC
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

bool check(ll x, int k, const vll& a){
  int tused = 1; // trucks used
  ll cw = 0; // currrent weight

  for(ll w : a){
    if(w > x) return false;

    if(cw + w <= x) cw += w;
    else{
      tused++;
      cw = w;
    }
  }

  return tused <= k;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int k, n;
  cin>>n>>k;

  vll a(n);
  ll l = 0, h = 0, m, ans; // low, high, m: mid

  for(int i=0; i<n; i++){
    cin>>a[i];
    l = max(l, a[i]);
    h += a[i];
  }

  ans = h;

  while(l <= h) {
    m = l + (h - l) / 2;
    if(check(m, k, a)) {
      ans = m;
      h = m - 1;
    } else {
      l = m + 1;
    }
  }

  cout<<ans;
  
  return 0;
}