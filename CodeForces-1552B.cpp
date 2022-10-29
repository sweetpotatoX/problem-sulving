//
// Created by abdob on 10/29/2022.
//
/*
 ~ Author    : @tridib_2003
*/

#pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("avx,avx2,fma")

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update> indexed_set;

#define ll                  long long
#define ull                 unsigned long long
#define PI                  3.1415926535897932384626
#define MOD                 998244353 // 1000000007
#define vi                  vector<int>
#define vb                  vector<bool>
#define vvi                 vector<vector<int> >
#define vll                 vector<long long>
#define pb                  push_back
#define eb                  emplace_back
#define mp(a, b)            make_pair(a, b)
#define pii                 pair<int, int>
#define vpii                vector<pair<int, int> >
#define mk(arr, n, type)    type *arr = new type[n];
#define FOR(i, a, b)        for (int(i) = (a); (i) < (b); ++(i))
#define RFOR(i, a, b)       for (int(i) = (a)-1; (i) >= (b); --(i))
#define FORALL(i, a)        for (auto& (i) : (a))
#define printall(a)         for (auto& (i) : (a)) cout << i << ' '
#define print(a)            cout << a << '\n'
#define rsort(a)            sort((a).rbegin(), (a).rend())
#define w(x)                int x; cin >> x; while(x--)
#define all(c)              (c).begin(), (c).end()
#define sz(c)               (int)(c).size()
#define pqmx                priority_queue<int>
#define pqmn                priority_queue<int, vector<int>, greater<int> >
#define max3(a, b, c)       max((a), max((b), (c)))
#define min3(a, b, c)       min((a), min((b), (c)))
#define mx_all(c)           *max_element((c).begin(), (c).end())
#define mn_all(c)           *min_element((c).begin(), (c).end())
#define lwr_b(c, a)         lower_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define upr_b(c, a)         upper_bound((c).begin(), (c).end(), (a)) - ((c).begin())
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


const int MAXN = 5 * 1e4 + 5;

int standing[MAXN][6];

int isBetter(int p1, int p2) {
    int score_p1 = 0, score_p2 = 0;

    FOR (i, 1, 6) {
        score_p1 += standing[p1][i] < standing[p2][i];
        score_p2 += standing[p2][i] < standing[p1][i];
    }

    return ((score_p1 > score_p2) ? p1 : p2);
}

void solve() {

    int n;
    cin >> n;

    FOR (i, 1, n + 1) {
        FOR (j, 1, 6) {
            cin >> standing[i][j];
        }
    }

    int currBest = 1;

    FOR (i, 2, n + 1) {
        currBest = isBetter(currBest, i);
    }

    // if no best player exists
    int defeated = 0;

    FOR (i, 1, n + 1) {

        if (i != currBest) {
            int best = isBetter(currBest, i);
            defeated += (best == currBest);
        }
    }

    cout << ((defeated == n - 1) ? currBest : -1);
}

int32_t main() {

    FIO;

    int tc = 1;
    cin >> tc;
    while (tc--) {
        solve();
        cout << '\n';
    }

    return 0;
}