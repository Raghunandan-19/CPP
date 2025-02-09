#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void print(int n) {
        for (int i = 1; i <= n; i++) {
            // space
            for (int j = 1; j <= (n - i); j++) {
                cout << " ";
            }

            // characters
            char ch = 'A';
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << ch;
                if (j < i) ch++;
                else ch--;
            }

            // space
            for (int j = 1; j <= (n - i); j++) {
                cout << " ";
            }
            cout << "\n";
        }
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    sol.print(n);

    return 0;
}