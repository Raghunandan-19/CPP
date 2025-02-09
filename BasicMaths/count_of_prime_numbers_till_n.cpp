#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isPrime(int n) {
        if (n <= 1) return false;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }

        return true;
    }
public:
    int primeUptoN(int n) {
        int count = 0;

        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << sol.primeUptoN(n) << "\n";

    return 0;
}