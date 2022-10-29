//
// Created by abdob on 10/29/2022.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<ll, ll> pii;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair

int main()
{
    int hh; cin >> hh;
    for (int h = 0; h < hh; h++) {
        int row, col;
        cin >> row >> col;
        vs grid;
        for (int i = 0; i < row; i++) {
            string s; cin >> s;
            grid.push_back(s);
        }
        if (grid[0][0] == '1') {
            cout << -1 << endl;
            continue;
        }
        vvi ops;
        for (int i = row - 1; i >= 0; i--) {
            for (int j = col - 1; j >= 1; j--) {
                if (grid[i][j] == '1') {
                    vi curop = {i + 1, j, i + 1, j + 1};
                    ops.push_back(curop);
                }
            }
        }
        for (int i = row - 1; i >= 1; i--) {
            if (grid[i][0] == '1') {
                vi curop = {i, 1, i + 1, 1};
                ops.push_back(curop);
            }
        }
        cout << ops.size() << endl;
        for (int i = 0; i < ops.size(); i++) {
            cout << ops[i][0] << " " << ops[i][1] << " " << ops[i][2] << " " << ops[i][3] << endl;
        }
    }
}