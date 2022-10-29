//
// Created by abdob on 10/29/2022.
//
#include <bits/stdc++.h>
#include <time.h>
#define int long long int
#define pb push_back
#define mem(a, x) memset(a, x, sizeof a)
#define all(a) a.begin(), a.end()
#define scnarr(a, n) for (int i = 0; i < n; ++i) cin >> a[i]
#define vi vector<int>
#define si set<int>
#define pii pair <int, int>
#define sii set<pii>
#define vii vector<pii>
#define mii map <int, int>
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
using namespace chrono;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
//Constants
const int MOD = 1000000007; // 1e9 + 7
const int MAXN = 200005;
const int INF = 100000000000005; // 1e15 +5

vi fact(MAXN);

int power(int x, int y){
    int ans = 1;
    while(y > 0){
        if(y&1){
            ans = (ans * x)%MOD;
            --y;
        }else{
            x = (x * x)%MOD;
            y /= 2;
        }
    }
    return ans;
}

int nCr(int n, int r){
    int num = fact[n];
    int deno = fact[r] * fact[n - r] % MOD;
    deno = power(deno, MOD -2);
    int res = num * deno % MOD;

    return res;

}

void solve(){
    int n, m, k, res = 0;
    cin >> n >> m >> k;
    vi a(n);
    scnarr(a, n);
    sort(all(a));
    // debug(a);
    mii mm, mmm;
    for(int i = 0; i < n; ++i){
        mm[a[i]] = i;
        if(!mmm.count(a[i]))
            mmm[a[i]] = i;
    }

    for(int i = 0; i <= n - m; ++i){
        int req = k + a[i];
        auto itr = mmm.upper_bound(req);
        int idx;
        if(itr != mmm.end()){
            idx = itr->second;
        }else{
            idx = n;
        }
        int cnt = idx - i -1;
        if(cnt +1 >= m){
            res = (res + nCr(cnt, m -1)) % MOD;
        }

    }
    cout << res << endl;

    return;
}

signed main()
{
    faster;
#ifndef ONLINE_JUDGE
    freopen("ip.txt", "r", stdin);
    freopen("op.txt", "w", stdout);
#endif
    fact[0] = 1;
    for(int  i = 1; i < MAXN; ++i){
        fact[i] = fact[i -1] * i % MOD;
    }
    int t; cin >> t; while(t--)
        solve();
    return 0;
}


