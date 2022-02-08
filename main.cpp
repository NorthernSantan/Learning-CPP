//
// Created by colin on 2/7/2022.
//

/*
 *
 * Preparation for waterloo ccc
 *
 * Practice using cpp for competition
 *
 */

#include <bits/stdc++.h>

using namespace std;

// Match type for vector since it is not an array
void print (vector<int> a, int n) {
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
}

int main() {

    // Optimization to remove c style input output
    ios_base::sync_with_stdio(false);
    // Optimization to prevent buffer flushing automatically
    cin.tie(nullptr);

    vector<int> arr(6);

    arr = {9,3,4,6,7,9};

    cout << arr.size() << "\n";

    int n = 6;

    print (arr, n);

    return 0;

}