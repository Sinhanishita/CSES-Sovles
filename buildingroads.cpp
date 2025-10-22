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
bool vis[N];
vector<int>g[N];

void dfs(int u){
	vis[u] = 1;
	for(auto v: g[u]){
		if(!vis[v]){
			dfs(v);
		}
	}
}
int32_t main() {
    slow;
    int n, m; cin >> n >> m;
    while(m--){
    	int u, v; cin >> u >> v;
    	g[u].pb(v);
    	g[v].pb(u);
    }
    dfs(1);
    int road =0;
    vector<int>path;
    path.pb(1);
    for(int i =1; i <= n; i++){
    	if(!vis[i]){
    		dfs(i);
    		road++;
    		// path.pb(i-1);
    		path.pb(i);
    		path.pb(i);
    	}
    }

    if(road == 0) cout << 0 << nl;
    else{
    	cout << road << nl;
	    for(int i =0; i < path.size()-1; i+=2){
	    	cout << path[i] << sp << path[i+1] << nl;
	    }
	    cout << nl;
    }
    
}