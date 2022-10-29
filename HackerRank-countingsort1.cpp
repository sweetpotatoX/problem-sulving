//
// Created by abdob on 10/29/2022.
//
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, val;
    int A[100];
    for (int i = 0; i < 100; i++) {
        A[i] = 0;
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        A[val]++;
    }
    printf("%d", A[0]);
    for (int i = 1; i < 100; i++) {printf(" %d", A[i]);}
    printf("\n");
    return 0;
}