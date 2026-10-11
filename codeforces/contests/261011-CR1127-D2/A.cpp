/*
Date: 11/10/2026
A. The Projections of Paco
Pretests passed (4)
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, n;
  cin>>t;

  while(t--){
    cin>>n;

    vll a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll s = 0, sign = 1;
    for(int i=0; i<n; i++){
      s += sign*a[i];
      sign = -sign;
    }

    cout<<(n&1 == 0 ? -s : s)<<"\n";
  }
  
  return 0;
}