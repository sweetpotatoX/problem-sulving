//
// Created by abdob on 10/29/2022.
//
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());



    long long sum_left = a[0] + a[1];
    long long sum_right = a[n - 1];
    int left = 2;
    int right = n - 2;
    while (left < right) {
        if (sum_left < sum_right) {
            cout << "YES\n";
            return;
        }
        sum_left += a[left];
        sum_right += a[right];
        left++;
        right--;
    }
    if (sum_left < sum_right) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}