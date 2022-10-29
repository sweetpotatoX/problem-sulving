//
// Created by abdob on 10/29/2022.
//

#include <cstdio>

int main()
{
    int n, s, t, p[100000+1];
    scanf("%d%d%d", &n, &s, &t);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &p[i]);
    }
    int step = 0;
    while (s != t && p[s] != 0)
    {
        int temp = p[s];
        p[s] = 0;
        s = temp;
        step += 1;
    }
    printf("%d\n", s == t ? step : -1);
    return 0;
}