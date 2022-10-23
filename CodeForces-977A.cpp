//
// Created by abdob on 10/23/2022.
//
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int k;
    char a[20];
    while(cin>>a>>k)
    {
        int len=strlen(a);
        int j=0;
        for(int i=0;i<k;i++)
        {
            if(a[len-1-j]=='0')
            {
                a[len-1-j]='*';
                j++;
            }
            else
                a[len-1-j]=a[len-1-j]-1;
        }

        for(int i=0;i<len;i++)
        {
            if(a[i]!='*')
                cout<<a[i];
        }
        cout<<endl;

    }
    return 0;
}