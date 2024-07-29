#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isMagicSquare(vector<vector<int>> s) {
    const int MAGIC = 15;
    const vector<vector<int>> CHECKS = {
        {0, 0, 0, 1, 0, 2}, {1, 0, 1, 1, 1, 2}, {2, 0, 2, 1, 2, 2}, // -> Rows
        {0, 0, 1, 0, 2, 0}, {0, 1, 1, 1, 2, 1}, {0, 2, 1, 2, 2, 2}, // -> Cols
        {0, 0, 1, 1, 2, 2}, {0, 2, 1, 1, 2, 0}                      // -> Diags
    };
    for (int i = 0; i < 8; i++) {
        vector<int> check = CHECKS[i];
        if (s[check[0]][check[1]] + s[check[2]][check[3]] + s[check[4]][check[5]] != MAGIC) return false;
    }
    return true;
}


int main(int argc, char** argv) {
    vector<vector<int>> s = {
        {8, 3, 4},
        {1, 5, 9},
        {6, 7, 2}
    };
    cout << isMagicSquare(s) << endl;
    return 0;
}