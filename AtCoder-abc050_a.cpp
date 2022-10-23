//
// Created by abdob on 10/23/2022.
//
#include <iostream>

using namespace std;

int main() {
    int a , b ;
    string op ;
    cin >> a >> op >> b ;
    if ( op == "+")
        cout << a + b << endl ;
    else
        cout << a - b << endl ;
}
