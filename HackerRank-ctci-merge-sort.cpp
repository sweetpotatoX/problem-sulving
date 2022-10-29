//
// Created by abdob on 10/29/2022.
//
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


uint64_t insertionSort(vector<int> &ar, int low, int high) {
    if (high - low < 2) {
        return 0;
    }

    int mid = (low + high) / 2;
    uint64_t count;

    count = insertionSort(ar, low, mid);
    count += insertionSort(ar, mid, high);

    vector<int> aux(ar.begin() + low, ar.begin() + mid);
    int walk = mid;
    int cur = low;
    int i = 0;
    while ((i < aux.size()) && (walk < high)) {
        if (ar[walk] < aux[i]) {
            ar[cur++] = ar[walk++];
            count += (walk - cur);
        } else {
            ar[cur++] = aux[i++];
        }
    }

    while(i < aux.size()) {
        ar[cur++] = aux[i++];
    }

#if 0
    for (int i = low + 1; i < high; i++) {
        int cur = ar[i];
        int j;
        for (j = i - 1; (j >= low) && (cur < ar[j]); j--) {
            ar[j + 1] = ar[j];
            count++;
        }

        ar[j+1] = cur;
    }
#endif

    return count;
}



int mergeSort(vector<int> & a) {
    int count = 0;

    if (a.size() >= 2) {
        vector<int> first(a.begin(), a.begin() + a.size() / 2);
        vector<int> second(a.begin() + a.size() / 2, a.end());

        count += mergeSort(first);
        count += mergeSort(second);
        //cout << first.size() << ":" << second.size() << ":" << count << endl;

        int i = 0, j = 0;
        while (i < first.size() && j < second.size()) {
            if (first[i] <= second[j]) {
                a[i + j] = first[i];
                i++;
            } else {
                a[i + j] = second[j];
                count += (first.size() - i);
                //cout << count << "-" << (first.size() - i) << endl;
                j++;
            }
        }

        while (i < first.size()) {
            a[i + j] = first[i];
            i++;
        }

        while (j < second.size()) {
            a[i + j] = second[j];
            j++;
        }
    }

    return count;
}

uint64_t count_inversions(vector<int> &a) {
#if 0
    int count = 0;

    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i-1]) {
            int idx = i;
            while ((idx != 0)  && (a[idx] < a[idx - 1])) {
                swap(a[idx], a[idx - 1]);
                idx--;
                count++;
            }
        }
    }
#endif
    return insertionSort(a, 0, a.size());
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int arr_i = 0;arr_i < n;arr_i++){
            cin >> arr[arr_i];
        }
        cout << count_inversions(arr) << endl;
    }
    return 0;
}