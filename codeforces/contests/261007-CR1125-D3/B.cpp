/*
Date: 07/10/2026
Codeforces Round 1125 (Div. 3)
B. Did Not Go to Print
Accepted
*/

#include<bits/stdc++.h>
using namespace std;
 
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int t, n;
  string s;
  cin>>t;
  
  while(t--){
    cin>>n>>s;
 
    stack<int> docs;
    vector<int> index (n);
    for(int i=0; i<n; i++){
      index[i] = i+1;
      if(s[i]=='1'){
        docs.push(index[i]);
      }
      if(s[i]=='2'){
        if(!docs.empty()){
          index[docs.top()-1] = 0;
          docs.pop();
        } else{
          index[i] = 0;
        }
      }
      if(s[i]=='3') index[i] = 0;
    }
 
    int cont = count(index.begin(), index.end(), 0);
    cout<<n-cont<<"\n";
 
    if(cont != n){
      for(int ind : index) {
        if(ind != 0) cout<<ind<<" ";
      }
    }
    cout<<"\n";
  }
 
  return 0;
}