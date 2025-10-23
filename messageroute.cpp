/// IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
 
#define slow ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ll long long
#define sp ' '
#define PI 3.14159265358979323846
#define __lcm(a, b) ((a / __gcd(a, b)) * b)
#define db double
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define cn continue
#define mod 1000000007
 
const int N = 1e5 + 5;
int dist[N];
bool vis[N];
vector<int>g[N];
int par[N];
queue<int>q;
int n, m;
int32_t main() {
    slow;
    cin >> n >> m;
    while(m--){
    	int u, v; cin >> u >> v;
    	g[u].push_back(v);
    	g[v].push_back(u);
    }
    q.push(1);
    vis[1] = true;
    dist[1] = 0;
    par[1] = -1;
    while(!q.empty()){
    	int u = q.front();
    	q.pop();
    	for(auto v: g[u]){
    		if(!vis[v]){
    			q.push(v);
    			par[v] = u;
    			dist[v] = dist[u] + 1;
    			vis[v] = true;
    		}
    	}
    }
    if(!vis[n]){
    	cout << "IMPOSSIBLE" << nl;
    	return 0;
    }
    vector<int> path;
    for (int i = n; i != -1; i = par[i])  path.push_back(i);
 
    reverse(all(path));

    cout << dist[n] + 1 << nl;
    for (auto node : path)
        cout << node << sp;
    cout << nl;
}
// https://cses.fi/problemset/task/1667/