//
// Created by abdob on 10/23/2022.
//

#include<iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<string>
#include<queue>
#include<vector>
#include<map>
#define ll long long
#define inf 0x3f3f3f3f
#define rep(i,a,b) for(register int i=(a);i<=(b);++i)
using namespace std;
const int maxn=14;
const ll mo=1000000007;
ll n,m,k;
ll dp[maxn][maxn][maxn];
int a[maxn];
ll sum[maxn],c[maxn][maxn];
ll dfs(int pos,int num,int cnt,bool limit)
{
    //cout<<pos<<endl;
    if(num<0) return 0;
    if(pos==-1) return (num==0);
    if(!limit&&dp[pos][num][cnt]!=-1) return dp[pos][num][cnt];
    int up=limit?a[pos]:9;
    ll tmp=0,fg=0;
    rep(i,0,up)
    {
        if(i==4||i==7) fg=1;
        else fg=0;
        tmp+=dfs(pos-1,num-fg,cnt,limit&&(i==a[pos]));
    }
    if(!limit) dp[pos][num][cnt]=tmp;
    return tmp;
}
ll cal(int i,int res)
{
    ll ans=0;
    if(i==7) return 1;
    for(int x=0;x<=10;x++)
        if(sum[x]&&res-x>0)
        {
            sum[x]--;
            ans=(ans+(sum[x]+1)*cal(i+1,res-x)%mo)%mo;
            sum[x]++;
        }
    return ans;
}
void solve(ll x)
{
    memset(dp,-1,sizeof(dp));
    int pos=0;
    while(x)
    {
        a[pos++]=x%10;
        x/=10;
    }
    //cout<<"*";
    for(int i=0;i<=10;i++)
    {
        sum[i]=dfs(pos-1,i,i,1)%mo;
        //cout<<sum[i]<<" ";
    }
    sum[0]--;
    ll ans=0;
    for(int i=10;i>=0;i--)
        if(sum[i]) ans=(ans+sum[i]*cal(1,i)%mo)%mo;
    printf("%lld\n",ans);
}
int main()
{
    int T,cas=1;
    while(scanf("%lld",&n)!=EOF)
    {
        solve(n);
    }
    return 0;
}