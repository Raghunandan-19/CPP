#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rowWithMax1s(vector<vector<int>> &mat) {
        int n = mat.size(); // Number of rows
        int m = mat[0].size(); // Number of columns
        int cnt_max = 0; // Maximum count of 1s found so far
        int idx = -1; // Index of row with maximum 1s

        for (int i = 0; i < n; i++) {
            // Find the first occurrence of 1 in the current row using lower_bound
            auto it = lower_bound(mat[i].begin(), mat[i].end(), 1);

            // Calculate the index of the first 1
            int pos = distance(mat[i].begin(), it);


            // Calculate the number of 1s in the current row
            int cnt = mat[i].size() - pos;

            // Update if current row has more 1s than previous maximum
            if (cnt > cnt_max) {
                cnt_max = cnt;
                idx = i;
            }
        }

        // Return the index of the row with maximum 1s
        return idx;
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

    Solution sol;
    cout << sol.rowWithMax1s(mat) << "\n";

    return 0;
}