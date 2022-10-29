//
// Created by abdob on 10/23/2022.
//
#include <bits/stdc++.h>

using std::cin;
using std::cout;
using std::string;

bool isPalindrome(string s) {
    string rs = s;
    reverse(rs.begin(), rs.end());
    return s == rs;
}

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Yes\n";
        return 0;
    }

    while (n % 10 == 0) n /= 10;

    if (isPalindrome(std::to_string(n))) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}

