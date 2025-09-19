/*
Date: 21/08/2025
Codeforces Round 1043 (Div. 3)
B. The Secret Number
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  ll n;

  cin>>t;

  vector<ll> p(19); // power of 10
  p[0] = 1;
  for(int i=1; i<=18; i++)  p[i] = p[i-1]*10LL;

  while(t--) {
    cin>>n;

    vector<ll> nums;
    for(int i=1; i<=18; i++) {
      ll d = p[i] + 1LL;
      if(d > n) break;
      if (n % d == 0LL) nums.push_back(n/d);
    }

    if(nums.empty()) cout<<0<<"\n";
    else {
      sort(nums.begin(), nums.end());
      cout<<nums.size()<<"\n";
      for(auto num : nums) cout<<num<<" ";
      cout<<"\n";
    }
  }

  return 0;
}