#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;
vector<vector<bool>> visited;

// direcciones de movimiento
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

// movimientos válidos
bool validMove(int x, int y) {return x >= 0 && x < n && y >= 0 && y < m;}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  cin>>n>>m;

  grid.resize(n);
  for(int i=0; i<n; i++) cin>>grid[i];

  return 0;
}