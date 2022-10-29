//
// Created by abdob on 10/29/2022.
//


#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define eb                    emplace_back
#define ull                   unsigned long long
#define bug(x)				  cout<<"  [ "#x<<" = "<<x<<" ]"<<endl;
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    int i=0,j=0,cnt=0,ans=0;
    bool one=false;
    while(i<n && j<n)
    {
        if(s[j]=='1')
        {

            if(!one)
                ans+=(cnt/(k+1));
            else
                ans+=((cnt-k)/(k+1));
            i=j;
            cnt=0;
            one=true;
        }
        else if(s[j]=='0')
            cnt++;
        j++;
        //cout<<ans<<" "<<cnt<<" "<<one<<endl;
    }
    //cout<<ans<<endl;
    if(!one)
        ans+=((cnt-1)/(k+1))+1;
    else
        ans+=(cnt/(k+1));
    cout<<ans<<endl;
}
int main()
{
    KAMEHAMEHA
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
