#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int> > &vect, int i, int j, int n) {

    for(int row = 0; row < i; row++) {
        if(vect[row][j] == 1) {
            return false;
        }
    }

    int row = i;
    int col = j;

    while(row >= 0 && col >= 0) {
        if(vect[row][col] == 1) {
            return false;
        }

        row--;
        col--;
    }

    row = i;
    col = j;

    while(row >= 0 && col < n) {
        if(vect[row][col] == 1) {
            return false;
        }

        row--;
        col++;
    }

    return true;
}

bool nQueens(vector<vector<int> > &vect, int i, int n) {

    if(i == n) {
        return true;
    }

    for(int col = 0; col < n; col++) {
        if(isSafe(vect, i, col, n)) {
            vect[i][col] = 1;

            if(nQueens(vect, i+1, n)) {
                return true;
            }

            vect[i][col] = 0;
        }
        
    }

    return false;
}

int main() {

    int n = 2;
    //cin >> n;

    vector<vector<int> > vect(n, vector<int>(n, 0));

    if (nQueens(vect, 0, n)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << vect[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
