//
// Created by abdob on 10/29/2022.
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[200005],b[200005];
    scanf("%s",a);
    scanf("%s",b);
    int la=strlen(a),lb=strlen(b),sum=0;
    for(int i=la-1,j=lb-1;i>=0||j>=0;i--,j--)
    {
        if(a[i]==b[j])
        {
            sum++;
        }
        else
        {
            break;
        }
    }
    cout<<la+lb-sum*2<<endl;
}