//
// Created by abdob on 10/23/2022.
//
#include <stdio.h>

int main()
{
    char inp[10];
    int n,ans=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s",inp);
        if(inp[1]=='+')
            ans++;
        else
            ans--;
    }
    printf("%d\n",ans);
    return 0;
}