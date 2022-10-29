//
// Created by abdob on 10/29/2022.
//
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, x, l=-2*1e9, r=2*1e9;
    char s1[5], s2[5];
    scanf("%d", &n);
    while(n--) {
        scanf("%s%d%s", s1, &x, s2);
        if(s1[0]=='>' && s1[1]=='=' && s2[0]=='Y' && x>l) l=x;
        else if(s1[0]=='>' && s1[1]!='=' && s2[0]=='Y' && x+1>l) l=x+1;
        else if(s1[0]=='>' && s1[1]=='=' && s2[0]=='N' && x-1<r) r=x-1;
        else if(s1[0]=='>' && s1[1]!='=' && s2[0]=='N' && x<r) r=x;
        else if(s1[0]=='<' && s1[1]=='=' && s2[0]=='Y' && x<r) r=x;
        else if(s1[0]=='<' && s1[1]!='=' && s2[0]=='Y' && x-1<r) r=x-1;
        else if(s1[0]=='<' && s1[1]=='=' && s2[0]=='N' && x+1>l) l=x+1;
        else if(s1[0]=='<' && s1[1]!='=' && s2[0]=='N' && x>l) l=x;
    }
    if(l<=r) printf("%d", l);
    else printf("Impossible");
    return 0;
}