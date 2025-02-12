#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long int fact(int num) {
        if (num <= 1) {
            return 1;
        }

        return (long long) (num * fact(num - 1));
    }
};

int main() {
    int num;
    cin >> num;

    Solution sol;
    cout << sol.fact(num) << "\n";

    return 0;
}