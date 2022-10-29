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
    int n;
    cin>>n;
    const int LEN = 100;
    int dic[LEN] = {0};
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        dic[tmp]++;
    }
    for(int i=0; i<LEN; i++){
        for(int j=0; j<dic[i]; j++){
            cout<< i << " ";
        }
    }
    return 0;
}
