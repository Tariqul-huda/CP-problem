#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> board(9, "........."); // Padded board for boundary checks
    string rowInput;

    int knightCount = 0;

    for (int i = 2; i <= 6; i++) {
        cin >> rowInput;
        knightCount += count(rowInput.begin(), rowInput.end(), 'k');
        board[i] = ".." + rowInput + ".."; // Add padding to each row
    }

    if (knightCount != 9) { // There must be exactly 9 knights
        cout << "invalid" << endl;
        return 0;
    }

    // Directions for knight moves
    vector<pair<int, int>> directions = {
        {2, 1}, {2, -1}, {-2, 1}, {-2, -1},
        {1, 2}, {1, -2}, {-1, 2}, {-1, -2}
    };

    // Check for attacking knights
    for (int row = 2; row <= 6; row++) {
        for (int col = 2; col <= 6; col++) {
            if (board[row][col] == 'k') {
                for (auto [dr, dc] : directions) {
                    if (board[row + dr][col + dc] == 'k') {
                        cout << "invalid" << endl;
                        return 0;
                    }
                }
            }
        }
    }

    cout << "valid" << endl;
    return 0;
}
