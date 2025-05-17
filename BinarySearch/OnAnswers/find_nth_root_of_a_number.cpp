#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int nthRoot(int N, int M) {
        for (int i = 1; i <= M; i++) {
            long long val = pow(i, N);

            if (val == M) {
                return i;
            }
            else if (val > M) {
                break;
            }
        }

        return -1;
    }
};

int main() {
    int N, M;
    cin >> N >> M;

    Solution sol;
    cout << sol.nthRoot(N, M) << "\n";

    return 0;
}