#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long floorSqrt(long long n)  {
        long long ans = 1;

        for (int i = 1; i <= n; i++) {
            if ((i * i) <= n) {
                ans = i;
            }
            else {
                break;
            }
        }

        return ans;
    }
};

int main() {
    long long n;
    cin >> n;

    Solution sol;
    cout << sol.floorSqrt(n) << "\n";

    return 0;
}