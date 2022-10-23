//
// Created by abdob on 10/23/2022.
//
#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    bool ans = abs(x - y) < 3;

    cout << (ans ? "Yes" : "No") << "\n";

    return 0;
}
