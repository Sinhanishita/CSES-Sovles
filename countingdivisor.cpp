/// IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
 
#define slow ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ll long long
#define sp ' '
#define PI 3.14159265358979323846
#define db double
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define cn continue
#define mod 1000000007

int go(int n){
    vector<int>divs;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            divs.pb(i);
            if(i * i != n) divs.pb(n / i);
        }
    }
    return divs.size();
}
 
 
int32_t main() {
    slow;
    int t; cin >> t;
    while(t--){
        int n; cin >>  n;
        cout << go(n) << nl;
    }

}
// https://cses.fi/problemset/task/1713
