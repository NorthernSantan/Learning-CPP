//
// Created by colin on 2/16/2022.
//

/*
*
* Waterloo ccc contest code
* By Colin McCormack
*
*/

#include <bits/stdc++.h>

using namespace std;

int mustDiff (int rest, string pairs[][2], int combo, string groups[][3]) {

    int count = 0;

    // cout << "In must be different \n";

    // check if the pair is together

    // for each combination check if the pair exists
    for (int i = 0; i < combo; ++i) {
        // for each pair
        for (int j = 0; j < rest; ++j) {
            // check if the two strings exist
            for (int k = 0; k < 3; ++k) {
                // if a group member is part of a pair
                if (groups[i][k] == pairs[j][0]) {
                    // check if any other group memebers complete the pair
                    for (int l = 0; l < 3; ++l) {
                        if (l != k && groups[i][l] == pairs[j][1]) {
                            count++;
                        }
                    }
                }
            }
        }

    }

    return count;

}


int main() {

    // Optimization to remove c style input output
    ios_base::sync_with_stdio(false);
    // Optimization to prevent buffer flushing automatically
    cin.tie(nullptr);

    int x;
    cin >> x;
    string sameGroup[x][2];

    for (int i = 0; i < x; ++i) {
        cin >> sameGroup[i][0];
        cin >> sameGroup[i][1];
    }


    int y;
    cin >> y;
    string diffGroup[y][2];

    for (int i = 0; i < y; ++i) {
        cin >> diffGroup[i][0];
        cin >> diffGroup[i][1];
    }

    int g;
    cin >> g;
    string groups[g][3];

    for (int i = 0; i < g; ++i) {
        cin >> groups[i][0];
        cin >> groups[i][1];
        cin >> groups[i][2];
    }

    // cout << "Done reading input\n";

    int constraints = 0;

    constraints += mustDiff (y, diffGroup, g, groups);

    // cout << "Different group violations = " << constraints << "\n\n";

    // cout << "Same group violations = " << (x - mustDiff (x, sameGroup, g, groups)) << "\n\n";

    constraints += (x - mustDiff (x, sameGroup, g, groups));

    cout << constraints;

    return 0;

}
