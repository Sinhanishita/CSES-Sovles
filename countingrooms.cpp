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

const int N = 1e3 + 5;
char ch[N][N];
bool vis[N][N];
int n, m;

void dfs(int i, int j){
	if(i < 0 || j < 0 || i >= n || j >= m || vis[i][j] || ch[i][j] == '#') return;
    vis[i][j] = 1;
    dfs(i+1, j);
    dfs(i-1, j);
    dfs(i, j+1);
    dfs(i, j-1);
}


int32_t main() {
    slow;
    cin >> n >> m;
    
    for(int i =0; i < n; i++){
    	for(int j =0; j < m; j++){
    		cin >> ch[i][j];
    	}
    }
    int room = 0;
    for(int i =0; i < n; i++){
    	for(int j =0; j < m; j++){
    		if(ch[i][j] == '.' && !vis[i][j]){
    			dfs(i, j);
    			room++;
    		}
    	}
    }
    cout << room << nl;
}
// https://cses.fi/problemset/task/1192/