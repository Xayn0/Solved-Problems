#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define INF 1000000000
int VISITED = 1 , UNVISITED = -1;
vector <vii> AdjList;
vi Vis = {UNVISITED}; // all values are set to UNVISTED

void DFS(int u) {
Vis[u] = VISITED;
for(int i = 0; i < AdjList[u].size(); i++)
{
    if(Vis[AdjList[u][i].first] == UNVISITED )
        DFS(AdjList[u][i].first);

}

}
int main()
{








    return 0;
}
