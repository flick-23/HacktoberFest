#include<bits/stdc++.h>
using namespace std;
#define vvb vector<vector<bool> >

void display(vvb &grid, int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < n; j++) {
            
            if(grid[i][j]) {

                cout << "K\t";
            }else {

                cout << "-\t";
            }
        }
        cout << endl;
    }

    cout << "\n\n";
}

bool isItSafe(vvb &grid, int r, int c, int n) {
    
    int row_ind[] = {-1, 0, 1, 1, 1, 0, -1, -1};
    int col_ind[] = {-1, -1, -1, 0, 1, 1, 1, 0};

    for(int i = 0; i < 8; i++) {
        if(r + row_ind[i] >= 0 and r + row_ind[i] < n and c + col_ind[i] >= 0 and c + col_ind[i] < n and grid[r + row_ind[i]][c + col_ind[i]]) 
            return false;
    }

    return true;
}

int ans = 0;
void nKings(vvb &grid, int cr, int cc, int count, int n) {

    if(count == n) {

        //display(grid, n);
        ans++;
        return;
    }

    for(int i = cr; i < n; i++) {

        for(int j = (i == cr) ? cc : 0; j < n; j++) {

            if(isItSafe(grid, i, j, n)) {

                grid[i][j] = true;
                nKings(grid, i, j + 2, count + 1, n);
                grid[i][j] = false;
            }
        }
    }
}

int main() {

    int n = 6;

    vvb grid (n, vector<bool> (n, false));

    nKings(grid, 0, 0, 0, n);

    cout << ans << endl;

    return 0;
}
