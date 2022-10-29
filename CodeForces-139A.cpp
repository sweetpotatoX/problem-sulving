//
// Created by abdob on 10/29/2022.
//
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i(0), a[7];
    cin >> n;
    for (int i = 0; i < 7; i++) cin >> a[i];
    int t = a[0];

    while (t < n)
    {
        i++;
        i %= 7;
        t += a[i];
    }

    cout << i + 1 << endl;
    return 0;
}