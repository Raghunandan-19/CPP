#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfect(int n) {
        int sum = 0;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                sum += i;
                if ((n / i) != n) {
                    sum += (n / i);
                }
            }
        }

        return (sum == n);
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    if (sol.isPerfect(n) == 1) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}