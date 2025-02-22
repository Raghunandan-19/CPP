#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix) {
        int n = matrix.size(); // Number of rows
        int m = matrix[0].size(); // Number of columns
        int left = 0, right = m - 1; // Initialize left and right boundaries
        int top = 0, bottom = n - 1; // Initialize top and bottom boundaries
        vector<int> ans; // Vector to store the spiral order

        // Loop until the boundaries overlap
        while (left <= right && top <= bottom) {
            // Traverse from left to right on the top boundary
            for (int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++; // Move the top boundary down

            // Traverse from top to bottom on the right boundary
            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--; // Move the right boundary left

            // Check if there are remaining rows
            if (top <= bottom) {
                // Traverse from right to left on the bottom boundary
                for (int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--; // Move the bottom boundary up
            }

            // Check if there are remaining columns
            if (left <= right) {
                // Traverse from bottom to top on the left boundary
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++; // Move the left boundary right
            }
        }

        return ans; // Return the spiral order
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix;

    for (int i = 0; i < n; i++) {
        vector<int> row;
        for (int j = 0; j < m; j++) {
            int num;
            cin >> num;
            row.push_back(num);
        }
        matrix.push_back(row);
    }

    Solution sol;
    for (auto num : sol.spiralOrder(matrix)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}