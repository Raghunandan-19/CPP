#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    void printUpperHalf(int n) {
        for (int i = 0; i < n; i++) {
            // star
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            
            // space
            for (int j = 1; j <= (2 * n - 2) - (2 * i); j++) {
                cout << " ";
            }

            // star
            for (int j = 0; j <= i; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }

    void printLowerHalf(int n) {
        for (int i = 1; i < n; i++) {
            // star
            for (int j = 1; j <= (n - i); j++) {
                cout << "*";
            }

            // space
            for (int j = 1; j <= (2 * i); j++) {
                cout << " ";
            }

            // star
            for (int j = 1; j <= (n - i); j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
public:
    void print(int n) {
        printUpperHalf(n);
        printLowerHalf(n);
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    sol.print(n);

    return 0;
}