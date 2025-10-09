/*
Date: 05/10/2025
812 C. Sagheer and Nubian Market
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  ll n, s, k = 0, t = 0;
  cin>>n>>s;

  vector<ll> a(n);
  for(int i=0; i<n; i++) cin>>a[i]; 

  ll l = 0, r = n;
  while (l <= r) {
    ll m = (l + r) / 2;
    vector<ll> cost(n);
    for(ll i=0; i<n; i++) cost[i] = a[i] + (i+1)*m;
    sort(cost.begin(), cost.end());

    ll total = 0;
    for(ll i=0; i<m; i++) total += cost[i];

    if(total <= s) {
      k = m;
      t = total;
      l = m + 1;
    } else r = m - 1;
  }
  cout<<k<<" "<<t;

  return 0;
}