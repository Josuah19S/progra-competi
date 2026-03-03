/*
Date: 28/10/2025
Codeforces Round 1062 (Div. 4)
A. Square?
Accepted
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t;
  cin>>t;

  int a, b, c, d;
  while(t--){
    cin>>a>>b>>c>>d;
    if(a==b && a==c && a==d) cout<<"YES\n";
    else cout<<"NO\n";
  }
  
  return 0;
}