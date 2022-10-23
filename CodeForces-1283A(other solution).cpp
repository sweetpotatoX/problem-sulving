//
// Created by abdob on 10/23/2022.
//
#include<iostream>
using namespace std;
int main()
{
    int a, b, sum,n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        if ((a < 24 && a >= 0) && (b >= 0 && b < 60))
        {
            if ((a == 0) && (b == 0))return 0;
            else
            {
                sum = 1440-a * 60 -b;
                cout << sum << endl;
            }

        }

    }
    return 0;
}