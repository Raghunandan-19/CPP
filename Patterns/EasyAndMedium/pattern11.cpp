#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void printUpperHalf(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }

    void printLowerHalf(int n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= (n - i + 1); j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
public:
    void print(int n) {
        printUpperHalf(n);
        printLowerHalf(n - 1);
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    sol.print(n);

    return 0;
}
