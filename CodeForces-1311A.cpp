//
// Created by abdob on 10/23/2022.
//
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    int a, b, sum, n;
    cin >> n;
    while (n--){
        cin >> a >> b;
        if (a == b)
            cout << "0" << endl;

        else if (a < b){
            sum = b - a;
            if (sum % 2 == 0)
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
        else{
            sum = a - b;
            if (sum % 2 == 0)
                cout << "1" << endl;
            else
                cout << "2" << endl;
        }
    }
    return 0;
}