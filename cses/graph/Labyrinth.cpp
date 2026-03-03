/*
Date: 10/10/2025
CSES Problem Set
Labyrinth
ACCEPTED
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int n, m;
vector<string> grid;
ii start, goal;
vector<vector<bool>> visited;
vector<vii> parent;
vector<vector<char>> move_dir;

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
char dir[4] = {'U', 'D', 'L', 'R'};

bool validMove(int x, int y) {return x >= 0 && x < n && y >= 0 && y < m;}

void bfs(ii start) {
  queue<ii> q;
  visited[start.first][start.second] = true;
  q.push(start);

  while(!q.empty()) {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();

    for(int i=0; i<4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];

      if(validMove(nx, ny) && !visited[nx][ny] && grid[nx][ny] != '#') {
        visited[nx][ny] = true;
        parent[nx][ny] = {x, y};
        move_dir[nx][ny] = dir[i];
        q.push({nx, ny});
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin>>n>>m;

  grid.resize(n);
  for(int i=0; i<n; i++) cin>>grid[i];

  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      if(grid[i][j] == 'A') start = {i, j};
      if(grid[i][j] == 'B') goal = {i, j};
    }
  }

  visited.assign(n, vector<bool>(m, false));
  parent.assign(n, vector<ii>(m, {-1, -1}));
  move_dir.assign(n, vector<char>(m, 0));

  bfs(start);

  if(!visited[goal.first][goal.second]) cout<<"NO";
  else {
    cout<<"YES\n";

    string path;
    ii temp = goal;
    while(temp != start) {
      char move = move_dir[temp.first][temp.second];
      path.push_back(move);
      temp = parent[temp.first][temp.second];
    }

    reverse(path.begin(), path.end());
    cout<<path.size()<<"\n"<<path;
  }
  
  return 0;
}