#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> divisor;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisor.push_back(i);
                if ((n / i) != i) {
                    divisor.push_back((n / i));
                }
            }
        }

        sort(divisor.begin(), divisor.end());

        return divisor;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    vector<int> ans = sol.divisors(n);
    for (auto num : ans) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}