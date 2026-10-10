/*
Date: 10/10/2026
C. XOR Problem
Pretests passed (8)
*/

#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, n, k, v, step;
  cin>>t;

  while(t--){
    cin>>n;

    v = 1;
    while(v <= n) v *= 2;

    k = 2*v-1;
    cout<<k<<"\n";

    vi a(k); // final array
    for(int i=0; i<k; i++){
      if(i%2 == 0) a[i] = 0;
      else{
        step = (i+1)/2;
        a[i] = step & -step;
      }
      cout<<a[i]<<(i == k-1 ? "" : " ");
    }
    cout<<"\n";
  }
  
  return 0;
}