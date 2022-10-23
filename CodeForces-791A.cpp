//
// Created by abdob on 10/23/2022.
//
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int answer = 0;
    while(a <= b) {
        a *= 3;
        b *= 2;
        ++answer;
    }
    printf("%d\n", answer);
}