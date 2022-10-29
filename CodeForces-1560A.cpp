//
// Created by abdob on 10/29/2022.
//
#include <bits/stdc++.h>
#define el endl
#define ll long long
using namespace std;
int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    vector<int>a;
    int i = 1;
    while (a.size() != 1000) {
        if (i % 3 != 0 && i % 10 != 3) a.push_back(i);
        i += 1;
    }
    int _; for (cin >> _; _--;) {
        int n; cin >> n;
        cout << a[n - 1] << "\n";
    }
}
