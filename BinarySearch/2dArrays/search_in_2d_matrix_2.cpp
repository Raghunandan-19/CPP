#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target){
        int n = matrix.size();
        int m = matrix[0].size();
        
        // Start from the top-right corner
        int row = 0;
        int col = m - 1;

        // Traverse the matrix
        while (row < n && col >= 0) {
            // If the current element matches the target, return true
            if (matrix[row][col] == target) {
                return true;
            }
            // If the current element is less than the target, move down to the next row
            else if (matrix[row][col] < target) {
                row++;
            }
            // If the current element is greater than the target, move left to the previous column
            else {
                col--;
            }
        }

        // Target not found
        return false;
    }   
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    int target;
    cin >> target;

    Solution sol;
    cout << sol.searchMatrix(matrix, target) << "\n";
    
    return 0;
}