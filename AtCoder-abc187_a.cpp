//
// Created by abdob on 10/23/2022.
//
#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int A,B;
    cin >> A >> B;
    int sumA = 0, sumB = 0;
    while(A)
    {
        sumA += A%10;
        A /= 10;
    }
    while(B)
    {
        sumB += B%10;
        B /= 10;
    }
    cout << max(sumA,sumB) << "\n";
    return 0;
}
