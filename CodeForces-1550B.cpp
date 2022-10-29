//
// Created by abdob on 10/29/2022.
//
#include <bits/stdc++.h>
using namespace std;
#define _3en_7oras_ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define el '\n'
using ll = long long ;
const int N = 5e3/2;
//sequence of solving [J,H,I,K,E,F,B,D,C]

int main() {
    _3en_7oras_
    int t;
    cin>>t;
    while(t--) {
        int n, a, b;
        cin >> n >> a >> b;
        int ans = 0;
        string s;
        cin >> s;
        if (b >= 0) {
            ans = (a * n);
            ans += (b * n);
            cout << ans<<el;
        } else {
            stack<char> st;
            int seg = 1;
            st.push(s[0]);
            for (int i = 1; i < s.size(); i++) {
                if (s[i] != st.top())
                    seg++;
                st.push(s[i]);
            };
            int mn = seg / 2;
            int ans = a * n;
            ans += (mn * b);
            ans += b;
            cout << ans<<el;

        }
    }

    return 0;
}
