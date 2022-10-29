//
// Created by abdob on 10/29/2022.
//
#include <iostream>
#define repeat(i,n) for (int i = 0; (i) < (n); ++(i))
typedef long long ll;
using namespace std;
int main() {
    string s; cin >> s;
    ll ans = 0;
    int n = s.size();
    repeat (x, 1<<(n-1)) {
        ll acc = 0;
        repeat (i,n) {
            acc *= 10;
            acc += s[i] - '0';
            if ((x&(1<<i)) == 0) {
                ans += acc;
                acc = 0;
            }
        }
        ans += acc;
    }
    cout << ans << endl;
    return 0;
}