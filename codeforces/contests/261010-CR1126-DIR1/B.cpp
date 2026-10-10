/*
Date: 10/10/2026
B. MEX Game
Pretests passed (5)
*/

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, n, k;
  cin>>t;

  while(t--){
    cin>>n>>k;

    int a;
    vi c(n+2, 0); // cards
    for(int i=0; i<n; i++){
      cin>>a;
      if(a <= n) c[a]++;
    }

    for(int i=0; i<=n+1; i++){
      if(c[i] < 2*k){
        cout<<(c[i] == 2*k-1 ? "YES" : "NO")<<"\n";
        break;
      }
    }
  }
  
  return 0;
}