//
// Created by abdob on 10/29/2022.
//
#include <bits/stdc++.h>
#define el endl
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        ll sum = 0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            sum += x;

        }
        cout << (sum % n) * (n - (sum % n)) << el;
    }
    return 0;
}
