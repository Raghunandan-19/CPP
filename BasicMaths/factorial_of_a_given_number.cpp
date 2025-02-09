#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        int fact = 1;

        for (int i = 1; i <= n; i++) {
            fact *= i;
        }

        return fact;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << sol.factorial(n) << "\n";

    return 0;
}