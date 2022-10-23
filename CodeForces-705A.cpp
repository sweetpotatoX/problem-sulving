//
// Created by abdob on 10/23/2022.
//
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1="I hate that ",s2="I love that ",s4="I love it",s3="I hate it";
    int n,ans=0;
    cin>>n;
    for(int i=1;i<n;i++){
        if(ans==0){
            cout<<s1;
            ans=1;
            continue;
        }
        else{
            cout<<s2;
            ans=0;
            continue;
        }

    }
    if(n%2==1)
        cout<<s3;
    else
        cout<<s4;
    return 0;
}