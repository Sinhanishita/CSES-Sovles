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
vector<int>g[N];
int fnd =0;
bool vis[N];
int par[N];
vector<int>v;

void dfs(int n, int p){
	vis[n] = 1;
	for(int i =0; i< g[n].size(); i++){
		int child = g[n][i];
		if(!vis[child]){
			vis[child] = 1;
			par[child] = n;
			dfs(child, n);
		}
		else if( child != p && !fnd){
			int x = child;
			fnd = 1;
			v.pb(n);
			while(n != x){
				n = par[n];
				if(n== 0) break;
				v.pb(n);
			}
			v.pb(v[0]);
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
    for(int i= 1; i <= n; i++){
    	if(!vis[i] && !fnd){
    		dfs(i, 0);
    	}
    }
    if(!v.size()){
    	cout << "IMPOSSIBLE" << nl;
    }
    else{
    	cout << v.size() << nl;
    	for(int i =0; i < v.size(); i++) cout << v[i] << sp;
    	cout << nl;
    }
}