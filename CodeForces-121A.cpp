//
// Created by abdob on 10/29/2022.
//
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
const int maxn  = 1024;
ll luck[maxn];
ll f(int n)
{
    if(n==0)
        return 0;
    int i;
    ll ans=0;
    for(int i=1;i<=maxn;i++)
    {
        if(luck[i]<n)
        {
            ans+=luck[i]*(luck[i]-luck[i-1]);
        }
        else
        {
            ans+=luck[i]*(n-luck[i-1]);
            break;
        }
    }
    return ans;
}
int main()
{
    luck[1]=4;
    luck[2]=7;
    int t=3;
    for(int i=1;i<512;i++)
    {
        luck[t++]=luck[i]*10+4;
        luck[t++]=luck[i]*10+7;
    }
    int l,r;
    scanf("%d%d",&l,&r);
    printf("%lld\n",f(r)-f(l-1));
    return 0;
}