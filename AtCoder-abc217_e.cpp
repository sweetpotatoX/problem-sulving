//
// Created by abdob on 10/23/2022.
//
#include <bits/stdc++.h>
using namespace std;
#define el "\n"
using ll = long long;
int main() {
    int n;
    cin >> n;
    queue<int> A;
    priority_queue<int, vector<int>, greater<>>B;
    for(int i = 0; i < n; i++){
        int type;
        cin >> type;
        if(type == 1){
            int val;
            cin >> val;
            A.push(val);
        }else if(type == 2){
            if(B.empty()){
                cout << A.front() << el;
                A.pop();
            }else{
                cout << B.top() << el;
                B.pop();
            }
        }else{
            while (A.size()){
                B.push(A.front());
                A.pop();
            }
        }
    }
    return 0;
}
