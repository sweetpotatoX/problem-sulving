//
// Created by abdob on 10/23/2022.
//
#include <algorithm>
#include <iostream>
using namespace std;

int N, K, p[1010];

int main(){
    cin >> N >> K;
    for(int i = 0; i < N; ++i) cin >> p[i];
    sort(p, p + N);
    int ans = 0;
    for(int i = 0; i < K; ++i) ans += p[i];
    cout << ans << endl;
}
