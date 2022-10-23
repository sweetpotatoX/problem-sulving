//
// Created by abdob on 10/23/2022.
//
#include<iostream>
using namespace std;
int main()
{
    int n,m=0,k=0,count=0;
    while(cin>>n){
        for(int i=1;i<=n;i++)
        {
            m+=i;
            count+=m;
            k++;
            if(count==n)
                break;
            else if(count>n)
            {   k--;
                break;
            }
        }
        cout<<k<<endl;
        k=0;
        m=0;
        count=0;
    }
    return 0;
}