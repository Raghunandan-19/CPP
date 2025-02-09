#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestDigit(int n) {
        int largest = 0;

        while (n > 0) {
            int currentDigit = n % 10;
            if (currentDigit > largest) {
                largest = currentDigit;
            }
            n /= 10;
        }

        return largest;
    }
};

int main() {
    int n;
    cin >> n;

    Solution sol;
    cout << sol.largestDigit(n) << "\n";

    return 0;
}