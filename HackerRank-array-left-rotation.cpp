//
// Created by abdob on 10/23/2022.
//
#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
#define el "\n"
const int N = 2e5 + 5;
#define _3en_7oras_   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    _3en_7oras_
    int n,d;
    cin>>n>>d;
    deque<int> dq;
    for(int i = 0 ;i<n;i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);

    }
    for(int i = 0 ;i<d;i++)
    {
        int temp = dq.front();
        dq.pop_front();
        dq.push_back(temp);
    }
    for(int i = 0 ;i<n;i++)
        cout<<dq[i]<<" ";
    return 0;

}
