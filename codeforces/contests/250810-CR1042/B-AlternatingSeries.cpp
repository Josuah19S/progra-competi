/*
Date: 10/08/2025
Codeforces Round 1042 (Div. 3)
B. Alternating Series

*/

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, n;
  cin>>t;

  while(t--){
    cin>>n;

    vi a(n);
    if(n%2!=0) {
      for(int i=0; i<n; i++) a[i] = (i%2==0 ? -1 : 3);
    } else {
      if(n == 2) {
        a[0] = -1;
        a[1] = 2;
      } else {
        for(int i=0; i<n; i++) a[i] = (i%2==0 ? -1 : 3);
        a[n-2] = -1;
        a[n-1] = 2;
      }
    }

    for(int x : a) cout<<x<<" ";
    cout<<"\n";
  }
  
  return 0;
}