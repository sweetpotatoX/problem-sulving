//
// Created by abdob on 10/23/2022.
//
#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int n,ans;
int a[200010],s[200010];
int fa[200010],sum[200010],lft[200010],rht[200010];
bool f[200010];

struct node{
    int id,sum;
    bool operator <(const node &T)const{return sum<T.sum||(sum==T.sum&&id>T.id);}
};

priority_queue<node> Q;

int find(int x)
{
    if(fa[x]!=x) fa[x]=find(fa[x]);
    return fa[x];
}

void merge(int a,int b)
{
    a=find(a);b=find(b);
    if(a==b) return ;
    if(sum[a]<sum[b]) swap(a,b);
    fa[b]=a;sum[a]+=sum[b];lft[a]=min(lft[a],lft[b]);rht[a]=max(rht[a],rht[b]);
}

int main()
{
    int x;
    node b;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);fa[i]=lft[i]=rht[i]=i;sum[i]=1;
        if(a[i]==a[i-1]){s[i]=s[i-1];merge(i,i-1);}
        else s[i]=i;
    }
    for(int i=1;i<=n;i++){x=find(i);if(!f[x]){f[x]=1;Q.push((node){lft[x],sum[x]});}}
    while(!Q.empty())
    {
        b=Q.top();Q.pop();x=find(b.id);
        while(!f[x]&&!Q.empty()){b=Q.top();Q.pop();x=find(b.id);}
        if(!f[x]&&Q.empty()) break;
        ans++;f[x]=0;
        while(lft[x]>1&&!f[find(lft[x]-1)]){merge(x,lft[x]-1);x=find(x);}
        while(rht[x]<n&&!f[find(rht[x]+1)]){merge(x,rht[x]+1);x=find(x);}
        if(lft[x]>1&&rht[x]<n&&a[lft[x]-1]==a[rht[x]+1])
        {merge(lft[x]-1,rht[x]+1);Q.push((node){lft[find(lft[x]-1)],sum[find(lft[x]-1)]});}
    }
    printf("%d\n",ans);
    return 0;
}