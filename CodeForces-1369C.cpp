//
// Created by abdob on 10/29/2022.
//

#include<bits/stdc++.h>
#include<stdio.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;


#define ll                  long long
#define scl(n)              scanf("%lld",&n)
#define scll(n, m)              scanf("%lld%lld",&n, &m)
#define scc(c)	            scanf("%c",&c)
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define all(x) 	            (x).begin(), (x).end()
#define pr                  pair<ll, ll>
#define ff                  first
#define ss                  second

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  printf("\n")
#define el                  cout<<endl
#define md                  1000000007
#define inf                 9e18
#define ps                  cout<<" ";
#define Pai                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define pcas(i)             cout<<"Case "<<i<<": "<<endl;
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
bool cmp(ll l,ll r)
{
    return l>r;
}

int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,c,d,i,j,k,x,y,z,l,r, p, q;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>k;

        ll a[n], b[k];

        fr1(i,n)cin>>a[i];
        fr1(i, k)cin>>b[i];

        sort(a+1, a+n+1, cmp);
        sort(b+1, b+k+1);


        fr1(i, k)
        {
            if(b[i]==1) ans+=2*a[i] ;
            else ans+=a[i];
        }

        cnt=k;
        fr1(i, k)
        {
            if(b[i]>1)
            {
                cnt+=b[i]-1;
                ans+=a[cnt];
            }
        }

        cout<<ans;pn;
    }

    return 0;
}


