//
// Created by abdob on 10/23/2022.
//
#include<stdio.h>

int main()
{
    int a,b,c;
    int s1,s2,s3;
    scanf("%d%d%d",&a,&b,&c);
    s1=a+b;
    s2=a+c;
    s3=b+c;
    if(s1==c||s2==b||s3==a)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}