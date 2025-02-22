#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateMatrix(vector<vector<int>> &matrix) {
        int n = matrix.size();
        
        // Transpose the matrix
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // Reverse each row to get the final rotated matrix
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main() {
    int n;
    cin >> n; 
    vector<vector<int>> matrix;

    for (int i = 0; i < n; i++) {
        vector<int> row;
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            row.push_back(num);
        }
        matrix.push_back(row);
    }

    Solution sol;
    sol.rotateMatrix(matrix);
    for (auto row : matrix) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << "\n";
    }

    return 0;
}