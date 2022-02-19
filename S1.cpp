//
// Created by colin on 2/16/2022.
//

/*
*
* Waterloo CCC contest code
* By Colin McCormack
*
*/

#include <bits/stdc++.h>

using namespace std;

int combinations (int n) {
    int count = 0;
    int curr = n;

    if (n % 5 == 0) count++;
    if (n % 4 == 0) count++;

    int lowest;
    if (n/5 < n/4) lowest = n/4;
    else lowest = n/5;

    for (int i = 1; i < lowest; ++i) {

        if (((curr - i*5) > 0) && (curr - i*5) % 4 == 0) count++;
        // if (((curr - i*4) > 0) && (curr - i*4) % 5 == 0) count++;

        curr = n;
    }

    return count;

}


int main() {

    // Optimization to remove c style input output
    ios_base::sync_with_stdio(false);
    // Optimization to prevent buffer flushing automatically
    cin.tie(nullptr);

    int n;

    cin >> n;

    cout << combinations(n);

    return 0;

}
