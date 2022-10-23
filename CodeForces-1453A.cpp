//
// Created by abdob on 10/23/2022.
//
#define el "\n"
#define pb push_back
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100;
const int MAX_COORD = 100;

void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, i, j;
    cin >> n >> m;
    bool v[MAX_COORD + 5] = { 0 };
    int ans = 0;

    for (i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v[x] = true;
    }
    for (i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        if (v[x])
            ans++;
    }

    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--)
        solve();
}