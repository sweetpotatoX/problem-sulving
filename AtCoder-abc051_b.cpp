//
// Created by abdob on 10/23/2022.
//
#include <bits/stdc++.h>

using namespace std;

int main(void){
    int K,S;
    cin >> K >> S;


    int ans = 0;

    for(int x = 0; x <= K; ++x){
        for(int y = 0; y <= K; ++y){
            int z = S - x - y;
            if(0 <= z and z <= K){
                ans = ans + 1;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
