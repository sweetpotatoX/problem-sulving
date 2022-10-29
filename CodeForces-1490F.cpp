//
// Created by abdob on 10/23/2022.
//
#include <bits/stdc++.h>
using namespace std;
#define el "\n"
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        map<int, int> freq1, freq2;
        int n;
        cin >> n;
        int a[n + 2];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            freq1[a[i]]++;
        }
        // it.first -> val
        // it.second -> frequency
        // A = {1, 1,2,2,3,4}
        // freq1[1] = 2
        // freq1[2] = 2
        // freq1[3] = 1
        // freq1[4] = 1

        // freq2[2] = 2
        // freq2[1] = 2
        for(auto it : freq1){
            freq2[it.second]++;
        }
        ll ans = 1e9;
        for(int c = 0; c <= n; c++){
            ll res = 0;
            // it.first = freq
            // it.second = No. Of Elements with this frequency
            for(auto it : freq2){
                if(it.first == c) continue;
                else if(it.first > c)
                    res += (it.first - c) * it.second;
                else
                    res += it.first * it.second;
            }
            ans = min(ans, res);
        }
        cout << ans << el;
    }
    return 0;
}