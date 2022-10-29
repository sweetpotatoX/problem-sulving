//
// Created by abdob on 10/29/2022.
//
#include <bits/stdc++.h>
using namespace std;
void quickSort(vector <int> &arr) {

    if(arr.size() < 2) {
        return;
    }

    vector<int> left, right;
    int p = arr[0];
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < p) {
            left.push_back(arr[i]);
        } else if(arr[i] > p) {
            right.push_back(arr[i]);
        }
    }
    quickSort(left);
    quickSort(right);
    for(int i = 0; i < left.size(); i++) {
        arr[i] = left[i];
        cout<<left[i]<< " ";
    }
    arr[left.size()] = p;
    cout<<p<< " ";
    for(int i = 0; i < right.size(); ++i) {
        arr[left.size() + i + 1] = right[i];
        cout<<right[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);

    return 0;
}