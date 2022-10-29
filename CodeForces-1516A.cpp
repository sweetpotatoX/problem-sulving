//
// Created by abdob on 10/29/2022.
//
#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

public :
    void solve(){
        int n , k ; cin >> n >> k ;
        vector<int> v(n) ;
        for(auto &x : v) cin >> x;

        for(int i = 0 ; i < n - 1 && k; i ++){
            int can_remove = min(v[i], k ) ;
            k -= can_remove ;
            v[i] -= can_remove ;
            v[n-1] += can_remove ;
        }

        for(auto x : v){
            cout << x << " ";
        }
        cout << endl ;
    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}