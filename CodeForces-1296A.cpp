//
// Created by abdob on 10/23/2022.
//
#include <bits/stdc++.h>
#define inf 0x3f3f3f3f
#define ll long long
using namespace std;
const int maxn = 2009;
int a[maxn];
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        for(int i = 1;i <= n;++i) {
            scanf("%d", &a[i]);
        }
        int sum1 = 0, sum2 = 0;
        for(int i = 1;i <= n;++i) {
            if(a[i] & 1) {
                sum1++;
            }
            else {
                sum2++;
            }
        }
        if(sum1 & 1) {
            printf("YES\n");
        }
        else {
            if(sum2 >= 1 && sum1 >= 1) {
                printf("YES\n");
            }
            else {
                printf("NO\n");
            }
        }
    }
    return 0;
}