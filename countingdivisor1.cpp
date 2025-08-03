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

const int N = 1e6 + 5;
int d[N];


int32_t main() {
    slow;
    for(int i = 1; i < N; i++){
        for(int j = i; j < N; j+=i){
            d[j]++;
        }
    }
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        cout << d[x] << nl;
    }

}
// https://cses.fi/problemset/task/1713
