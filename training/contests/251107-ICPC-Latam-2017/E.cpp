/*
Date: 07/11/2025
2017-2018 ACM-ICPC Latin American Regional Programming Contest
E

*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  vector<int> v(1001);
  string s;
  int n;
  cin>>s>>n;
  v[0] = 1;
  v[1] = (v[0] * 10) % n;
  for(int i = 2;i<=1000;i++){
    v[i] = (v[i - 1] * 10) % n;
  }
  
  string check;
  int ct = 0;
  int checkSize = 5;
  for(int i = s.size() - 1;i>=0;i--){
    check += s[i];
    if(s[i] =='?'){
      checkSize--;
      ct++;
    }
    if(checkSize < 0){
      break;
    }
  }
  reverse(check.begin(),check.end());
  int startDigit = 0;
  if(checkSize >= 0){
    if(s[0] == '?'){
      startDigit = 1;
    }
  }
  int currRest = 0;
  int z = s.size() - 5;
  for(int i = 0;i<(z);i++){
    if(s[i] == '?'){
      if(i == 0){
        s[i] = '1';
      }else{
        s[i] = '0';
      }
    }
  }
  for(size_t i = 0;i<s.size();i++){
    if(s[i] != '?'){
      currRest = (currRest + ((s[i] - '0')*v[(s.size() - 1 - i)])%n)%n;
    }
  }
  ct--;
  int myCounter;
  if(startDigit == 1){
    myCounter = 11;
  }else{
    myCounter = 10;
  }
  for(int i = 0;i<ct;i++){
    myCounter *= 10;
  }
  
  cout<<check<<endl;
  cout<<myCounter<<endl;
  string base = to_string(myCounter);
  int sz = base.size();
  int maxCount = 9;
  for(int i = 1;i<sz - 1;i++){
    maxCount *= 10;
    maxCount += 9;
  }
  maxCount += pow(10,sz-1);
  cout<<maxCount<<endl;
  for(int i = myCounter;i<=maxCount;i++){
    base = to_string(myCounter);
    myCounter++;
  }
  return 0;
}