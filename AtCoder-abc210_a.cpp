//
// Created by abdob on 10/23/2022.
//
#include <iostream>
using namespace std;
int main(void)
{
    int n, a, x, y;
    cin >> n >> a >> x >> y;
    if(n <= a) cout << n*x << endl;
    else cout << a*x + (n-a)*y << endl;
    return 0;
}