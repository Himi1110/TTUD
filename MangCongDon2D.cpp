#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    vector<vector<int>> arr(a, vector<int>(b));
    vector<vector<int>> p_arr(a, vector<int>(b));

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            p_arr[i][j] = arr[i][j];
            if (i > 0) p_arr[i][j] += p_arr[i - 1][j];
            if (j > 0) p_arr[i][j] += p_arr[i][j - 1];
            if (i > 0 && j > 0) p_arr[i][j] -= p_arr[i - 1][j - 1];
        }
    }

    int x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2) {
        int sum = p_arr[x2][y2];
        if (x1 > 0) sum -= p_arr[x1 - 1][y2];
        if (y1 > 0) sum -= p_arr[x2][y1 - 1];
        if (x1 > 0 && y1 > 0) sum += p_arr[x1 - 1][y1 - 1];

        cout << sum << endl;
    }

    return 0;
}
