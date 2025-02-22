#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    // Function to generate a single row of Pascal's Triangle
    vector<int> generateRow(int num) {
        vector<int> row;
        int ans = 1;
        row.push_back(ans); // First element is always 1
    
        // Generate the remaining elements of the row
        for (int i = 1; i < num; i++) {
            ans *= (num - i); // Calculate the next element
            ans /= (i);       // Divide by the current index
            row.push_back(ans); // Add the element to the row
        }
    
        return row;
    }
public:
    // Function to generate Pascal's Triangle up to numRows
    vector<vector<int>> pascalTriangle(int numRows) {
        vector<vector<int>> ans;
            
        // Generate each row and add it to the result
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
    
        return ans;
    }
};

int main() {
    int numRows;
    cin >> numRows;

    Solution sol;
    for (auto row : sol.pascalTriangle(numRows)) {
        for (auto col : row) {
            cout << col << " ";
        }
        cout << "\n";
    }

    return 0;
}