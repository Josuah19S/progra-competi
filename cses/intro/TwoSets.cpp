/*
Date: 04/10/2025
CSES Problem Set
Two Sets
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

void printSet(set<int>& s) {
  cout<<s.size()<<"\n";
  for(int x : s) cout<<x<<" ";
  cout<<"\n";
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int n;
  cin>>n;

  set<int> a, b;

  if(n == 3 || n%4==3) {
    for(int i=3; i<=n; i+=4) {
      b.insert(i-3);
      a.insert(i-2);
      a.insert(i-1);
      b.insert(i);
    }
    b.erase(0);
    cout<<"YES"<<"\n";
    printSet(a);
    printSet(b);
  } else if (n%4==0) {
    for(int i=4; i<=n; i+=4) {
      b.insert(i-3);
      a.insert(i-2);
      a.insert(i-1);
      b.insert(i);
    }
    cout<<"YES"<<"\n";
    printSet(a);
    printSet(b);
  }
  else cout<<"NO";
  
  return 0;
}