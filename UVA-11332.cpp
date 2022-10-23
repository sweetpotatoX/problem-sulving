//
// Created by abdob on 10/23/2022.
//
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    while(cin >> n && n != 0){

        int tmp = n;
        while((tmp/10) > 0){

            int sum = 0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            tmp = sum;
            n = tmp;
        }
        cout << tmp << endl;
    }
    return 0;
}