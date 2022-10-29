//
// Created by abdob on 10/23/2022.
//
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

map<string, bool>mp;
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;

    ll cnt=0,ans=0;
    scl(n);
    ll  a[n];
    string s[n+1],s1;

    for(i=0; i<n; i++)  cin>>s[i];


    for(i=n-1;i>=0;i--)
    {
        if(mp[s[i] ] !=1 ){cout<<s[i] <<endl; mp[s[i] ]=1;}
    }


    return 0;
}