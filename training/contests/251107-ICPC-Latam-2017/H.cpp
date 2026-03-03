/*
Date: 07/11/2025
2017-2018 ACM-ICPC Latin American Regional Programming Contest
H. Hard choice
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
  
  int ch, be, pa;
  cin>>ch>>be>>pa;

  int a, b, c, ans=0;
  cin>>a>>b>>c;

  if(a > ch) ans += a-ch;
  if(b > be) ans += b-be;
  if(c > pa) ans += c-pa;
  
  cout<<ans;

  return 0;
}