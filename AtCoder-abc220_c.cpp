//
// Created by abdob on 10/23/2022.
//
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 3e5 + 5;
#define _3en_7or_ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// Sequence OF Solving
// H,G,J,E,I,F,B,D
int main() {
    _3en_7or_
    int T = 1;
    //cin>>T;
    while(T--)
    {
        ll n,x;
        cin>>n;
        ll a[n],s = 0;
        for(int i = 0 ;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        cin>>x;
        ll cnt = x/s;
        ll ans = cnt * n;
        ll cur = cnt * s;
        for(int i = 0;i<n;i++)
        {
            cur+=a[i];
            ans++;
            if(cur>x)
                break;
        }
        cout<<ans<<"\n";

    }


    return 0;

}
