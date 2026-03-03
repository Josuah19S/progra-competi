/*
Date: 07/11/2025
2017-2018 ACM-ICPC Latin American Regional Programming Contest
C

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  int k,n;
  cin>>k>>n;
  int aux;
  map<int,int> mp;
  int a = 0;
  int b = 0;
  int c = -1;
  int d = 0;
  for(int i = 1;i<=k;i++){
    mp[i] = 0;
  }
  for(size_t i = 0;i<n;i++){
    cin>>aux;
    mp[aux]++;
  }
  if(n < k - 1){
    cout<<"*"<<endl;
  }else{
    if((n + 1)%k == 0){
      a = (n+1)/k;
      for(auto w : mp){
        if(w.second == a){
          b++;
        }else{
          if(w.second + 1 == a){
            c = w.first;
          }
        }
      }
      if(b == mp.size() - 1 && c != -1){
        cout<<"+"<<c<<endl;
      }else{
        cout<<"*"<<endl;
      }
    }else if(n%k == 0){
      a = n/k;
      for(auto w : mp){
        if(w.second == a){
          b++;
        }else{
          if(w.second + 1 == a){
            c = w.first;
          }
          if(w.second - 1 == a){
            d = w.first;
          }
        }
      }
      if(b == mp.size() - 2 && c != -1 && d != -1){
        cout<<"-"<<d<<" +"<<c<<endl;
      }else{
        cout<<"*"<<endl;
      }
    }else if((n-1)%k == 0){
      a = (n-1)/k;
      for(auto w : mp){
        if(w.second == a){
          b++;
        }else{
          if(w.second - 1 == a || w.second == 1){
            c = w.first;
          }
          
        }
      }
      if(b == mp.size() - 1 && c != -1){
        cout<<"-"<<c<<endl;
      }else{
        cout<<"*"<<endl;
      }
    }else{
      cout<<"*"<<endl;
    }
  }

  return 0;
}