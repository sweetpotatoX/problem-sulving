//
// Created by abdob on 10/23/2022.
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans;
    queue<int>x,y;
    cin>>n>>m;
    int a[n+10],i;
    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    for(i=1;i<=n;i++){
        x.push(a[i]);
        y.push(i);
    }
    while(!x.empty()){
        if(x.front()<=m){
            x.pop();
            y.pop();
        }
        else{
            x.push(x.front()-m);
            y.push(y.front());
            x.pop();
            y.pop();
        }
        ans=y.back();
    }
    cout<<ans<<endl;
    return 0;
}