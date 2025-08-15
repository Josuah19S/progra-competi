/*
Date: 07/08/2025
2126 B. No Casino in the Mountains
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

bool visitedPeak(vi &a, int j, int k, int n) {
  if(j+k > n || a[j] == 1) return false;
  for(int i=j; i<j+k; i++) {
    if(a[i] == 1) return false;
  }
  return true;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, n, k, j, p;
  cin>>t;

  while(t--){
    cin>>n>>k;
    vi a(n);

    for(int i=0; i<n; i++) cin>>a[i];
    
    j = p = 0;
    while(j<n) {
      if(visitedPeak(a, j, k, n)) {
        j = j+k+1;
        p++;
      } else j++;
    }
    cout<<p<<"\n";
  }
  
  return 0;
}