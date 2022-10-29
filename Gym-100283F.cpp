//
// Created by abdob on 10/29/2022.
//
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <sstream>
#include <algorithm>
using namespace std;
#define pb push_back
#define mp make_pair
#define ms(a, b)  memset((a), (b), sizeof(a))
#define LOCAL
#define eps 0.0000001
#define LNF (1<<60)
typedef long long LL;
const int inf = 0x3f3f3f3f;
const int maxn = 100000+10;
const int mod = 1e9+7;

LL f1(LL n)//找一整段的
{
    LL l = 0, r = 2e6, mid;
    while(l<=r)
    {
        mid = (l+r)>>1;
        if(1LL*mid*(mid+1)*(2*mid+1)/6<=n)
            l = mid+1;
        else
            r = mid-1;
    }
    return r;
}

LL f2(LL n, int x)//找剩下的
{
    LL l = 0, r = 2*x+1, mid ,s;
    while(l<=r)
    {
        mid = (l+r)>>1;
        if(mid<=x)
            s = 1LL*mid*(mid+1)/2;
        else
            s = 1LL*x*x -  1LL*(2*x-1-mid)*(2*x-mid)/2; // 和 = 完整-缺少

        if( s>=n)
            r = mid-1;
        else
            l = mid+1;
    }
    return l;
}

void solve()
{
    LL n;
    scanf("%lld",&n);
    LL x = f1(n);
    n -= 1LL*x*(x+1)*(2*x+1)/6;
    LL y = f2(n,x+1);
    printf("%lld\n",1LL*x*x+y);
}

int main()
{
#ifdef LOCAL
    freopen("army.in", "r", stdin);
//      freopen("output.txt", "w", stdout);
#endif // LOCAL
    int T ,tt = 0;
    scanf("%d",&T);
    while(T--) {
        printf("Case %d: ",++tt);
        solve();
    }
    return 0;
}