//
// Created by abdob on 10/29/2022.
//
#include <cstdio>

int main(){

    long t; scanf("%ld", &t);
    while(t--){
        long a, b; scanf("%ld %ld", &a, &b);
        printf("%ld\n", a ^ b);
    }

    return 0;
}