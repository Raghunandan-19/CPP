#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int GCD(int n1, int n2) {
        while (n1 > 0 && n2 > 0) {
            if (n1 > n2) n1 %= n2;
            else n2 %= n1;
        }

        if (n2 == 0) return n1;
        return n2;
    }
public:
    int LCM(int n1, int n2) {
        return (n1 * n2) / GCD(n1, n2);
    }
};

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    Solution sol;
    cout << sol.LCM(n1, n2) << "\n";

    return 0;
}