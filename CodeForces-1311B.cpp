//
// Created by abdob on 10/29/2022.
//
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;


#define ll                  long long
#define scl(n)              cin>>n;
#define scc(c)	            cin>>c;
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define pfl(x)              printf("%lld\n",x)
#define pb                  push_back
#define debug               cout<<"I am here"<<endl;
#define pno                 cout<<"NO"<<endl
#define pys                 cout<<"YES"<<endl

#define l(s)                s.size()
#define asort(a)            sort(a,a+n)
#define all(x) 	            (x).begin(), (x).end()
#define dsort(a)            sort(a,a+n,greater<int>())
#define vasort(v)           sort(v.begin(), v.end());
#define vdsort(v)           sort(v.begin(), v.end(),greater<int>());
#define uniquee(x)          x.erase(unique(x.begin(), x.end()),x.end())
#define pn                  cout<<endl;
#define md                  1000000007
#define inf                 1e18
#define ps                  cout<<" ";
#define Pi                  acos(-1.0)
#define mem(a,i)            memset(a, i, sizeof(a))
#define tcas(i,t)           for(ll i=1;i<=t;i++)
#define pcas(i)             cout<<"Case "<<i<<": "<<"\n";
#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)


int main()
{
    fast;
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;

        ll cnt=0,ans=0,sum=0;
        cin>>n>>m;

        ll a[102];
        fr1(i,n)cin>>a[i];
        //map<ll, bool> mp;

        bool mp[102];
        mem(mp, 0);
        ll p[m+1];

        fr(i, m)cin>>p[i], mp[p[i] ]=true;
        sort(p, p+m, greater<int>());

        a[n+1]=inf;

        fr(i, n)
        {
            x=p[i];
            for(j=x; j<n; j++)
            {
                if(!mp[j] )continue;
                if(a[j]>a[j+1] )swap(a[j], a[j+1] );
            }
        }

        //fr1(i, n)cout<<a[i]<<" "; pn;


        fr1(i, n-1)
        {
            if( a[i] > a[i+1]){cnt=1; break;}
        }

        if(cnt)pno;
        else pys;


    }

    return 0;
}

