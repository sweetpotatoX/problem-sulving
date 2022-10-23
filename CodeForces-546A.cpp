//
// Created by abdob on 10/23/2022.
//
#include<iostream>
using namespace std;

int a[1001];

int main(){
    int k,n,w,sum=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++){
        a[i]=i*k;
        sum+=a[i];
    }
    if(sum-n>0)//！！！！！！
        cout<<sum-n<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}