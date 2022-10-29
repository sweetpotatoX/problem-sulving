//
// Created by abdob on 10/23/2022.
//
#include <bits/stdc++.h>
using namespace std;
#define _3en_7oras_ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define el '\n'
using ll = long long ;
const int N = 5e3/2;
//sequence of solving [K,D,C]
int main() {
    _3en_7oras_
    int t = 1;
    //cin>>t;
    while(t--) {
        int n,ans = 0 ;
        cin>>n;
        int b = 0 ,c = 0 ;
        for(int i = 0 ;i<n;i++)
        {
            int x;
            cin>>x;
            if(x>=0)
            {
                b+=x;
            }
            else c+=x;
        }
        cout<<b-c<<el;



    }
    return 0;
}