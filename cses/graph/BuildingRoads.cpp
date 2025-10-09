/*
Date: 07/10/2025
CSES Problem Set
Building Roads
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;

const int MAXN = 1e5;

vector<int> adj[MAXN];
vector<bool> visited(MAXN, false);
int n, m;

void dfs(int u) {
  visited[u] = true;
  for (int v : adj[u]) {
    if (!visited[v]) dfs(v);
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  

  int u, v;
  cin>>n>>m;

  for(int i=0; i<m; i++) {
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<int> pr; // pending roads
  for(int i=1; i<=n; i++) {
    if(!visited[i]) {
      pr.push_back(i);
      dfs(i);
    }
  }

  int prsize = pr.size();
  cout<<prsize-1<<"\n";
  for(int i=1; i<(int)prsize; i++) cout<<pr[i-1]<<" "<<pr[i]<<"\n";
  
  return 0;
}