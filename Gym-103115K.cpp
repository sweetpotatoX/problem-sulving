//
// Created by abdob on 10/29/2022.
//
#include<bits/stdc++.h>
using namespace std;
const int MAXN=100005;
char s[MAXN], t[MAXN];
int n,p1,p2,l;
int main()
{
    scanf("%d", &n);
    scanf("%s",s+1);
    strcpy(t+1,s+1);
    scanf("%d %d %d",&p1,&p2,&l);
    for(int i=0;i<l;i++)t[p2+i]=s[p1+i];
    for(int i=0;i<l;i++)s[p2+i]=s[p1+i];
    printf("%s\n%s\n", s+1,t+1);
    return 0;
}
