/*
Date: 11/10/2026
B. Prefix
Pretests passed (9)
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, n; // ai minus s, ai plus s
  cin>>t;

  while(t--){
    cin>>n;

    vll a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    ll ans, mins, maxs, val, v1, v2, v3, v4, s1, s2, s3, s4, s5;
    ans = mins = maxs = a[0];

    for(int i=1; i<n; i++){
      val = a[i];

      v1 = val - mins;
      v2 = val + maxs;
      v3 = val - mins;
      v4 = val + maxs;

      ans = max({ans, v1, v2, v3, v4});

      s1 = val;
      s2 = mins + val;
      s3 = 2*mins + val;
      s4 = maxs + val;
      s5 = 2*maxs + val;

      mins = min({s1, s2, s3, s4, s5});
      maxs = max({s1, s2, s3, s4, s5});
    }

    cout<<ans<<"\n";
  }
  
  return 0;
}