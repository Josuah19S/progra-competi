/*
Date: 10/08/2025
Codeforces Round 1042 (Div. 3)
A. Lever
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, n, i, j, it;
  cin>>t;

  while(t--){
    cin>>n;
    vi a(n), b(n);
    
    for(i=0; i<n; i++) cin>>a[i];
    for(i=0; i<n; i++) cin>>b[i];

    bool band;
    it = 0;

    do {
      band = false;
      it++;
      for(i=0; i<n; i++) {
        if(a[i] > b[i]) {
          a[i]--;
          band = true;
          break;
        }
      }
      for(j=0; j<n; j++) {
        if(a[j] < b[j]) {
          a[j]++;
          break;
        }
      }
    } while(band);

    cout<<it<<"\n";
  }
  
  return 0;
}