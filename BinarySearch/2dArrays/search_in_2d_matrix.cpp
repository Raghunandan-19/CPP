#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &mat, int target){
        int n = mat.size(); // Number of rows
        int m = mat[0].size(); // Number of columns

        // Treat the 2D matrix as a 1D sorted array
        int low = 0;
        int high = (n * m) - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2; // Find the middle index
            int row = mid / m; // Map 1D index to row
            int col = mid % m; // Map 1D index to column

            if (mat[row][col] == target) {
                return true; // Target found
            }
            else if (mat[row][col] < target) {
                low = mid + 1; // Search right half
            }
            else {
                high = mid - 1; // Search left half
            }
        }

        return false; // Target not found
    }   
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    int target;
    cin >> target;

    Solution sol;
    if (sol.searchMatrix(mat, target) == 1) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}