/*
Date: 07/11/2025
2017-2018 ACM-ICPC Latin American Regional Programming Contest
I. Imperial roads

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct DSU {
  vector<int> parent, rankk;
  DSU(int n) {
    parent.assign(n + 1, 0);
    rankk.assign(n + 1, 1);
    for (int i = 1; i <= n; i++)
      parent[i] = i;
  }
  int find_set(int v) {
    if (v == parent[v]) return v;
    return parent[v] = find_set(parent[v]);
  }
  void union_set(int u, int v) {
    u = find_set(u);
    v = find_set(v);
    if (u == v) return;
    if (rankk[u] < rankk[v]) swap(u, v);
    parent[v] = u;
    rankk[u] += rankk[v];
  }
};
struct Edge {
  int u, v; ll w;
  bool operator<(const Edge& other) {
    return w < other.w;
  }
};
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m; cin >> n >> m;
  vector<Edge> edgs(m);
  map<pair<int, int>, ll> roads;
  for (int i = 0; i < m; i++) {
    int u, v; cin >> u >> v; ll w; cin >> w;
    edgs[i] = {u, v, w};
    if (u > v) swap(u, v);
    roads[{u, v}] = w;
  }
  sort(edgs.begin(), edgs.end());
  DSU dsu(n);
  ll cost = 0;
  int used = 0;
  map<int, ll> mp;
  map<pair<int, int>, bool> count;
  for (auto& E : edgs) {
    int& u = E.u; int& v = E.v; ll& w = E.w;
    if (dsu.find_set(u) != dsu.find_set(v)) {
      dsu.union_set(u, v);
      if (!mp.count(u) && !mp.count(v)) {
        mp[u] = w; mp[v] = w;
      }
      else {
        if (mp.count(u)) mp[v] = w;
        else mp[u] = w;
      }
      if (u > v) swap(u, v);
      count[{u, v}] = true;
      cost += w;
      used++;
      if (used == n - 1) break;
    }
  }
  int q; cin >> q;
  while (q--) {
    int u, v; cin >> u >> v;
    if (u > v) swap(u, v);
    ll val = 0;
    if (count[{u, v}]) 
      val = cost;
    else 
      val = cost + roads[{u, v}] - max(mp[u], mp[v]);
    cout << val << '\n';
  }
  


  return 0;
}