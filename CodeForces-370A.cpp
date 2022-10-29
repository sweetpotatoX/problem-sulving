//
// Created by abdob on 10/29/2022.
//
#include <bits/stdc++.h>
#define el endl
#define ll long long
using namespace std;
int main() {
    int r1, c1, r2,c2;
    cin >> r1 >> c1 >> r2 >> c2;
// rook
    if(r1== r2 || c1 == c2) cout << 1 << " ";
    else cout << 2 << " ";
// Bishop
    if((r1 + c1) % 2 != (r2 + c2) % 2) cout << 0 << " ";
    else if(abs (r1 - r2) == abs(c1 - c2)) cout << 1 << " ";
    else cout << 2 << " ";
// King
    cout << max (abs (r1 - r2), abs (c2 - c1));
    return 0;
}
