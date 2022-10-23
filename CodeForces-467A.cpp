//
// Created by abdob on 10/23/2022.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p,q,num=0;
    cin>>n;
    while(n--){
        cin>>p>>q;
        if(q-p>=2)num++;
    }
    cout<<num<<endl;
    return 0;
}