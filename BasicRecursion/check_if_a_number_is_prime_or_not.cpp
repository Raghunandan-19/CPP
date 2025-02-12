#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool isPrime(int x, int num) {
        if (x * x > num) {
            return true;
        }

        if (num % x == 0) {
            return false;
        }


        return isPrime(x + 1, num);
    }
public:
    bool checkPrime(int num) {
        return isPrime(3, num);
    }
};

int main() {
    int num;
    cin >> num;

    Solution sol;
    if (sol.checkPrime(num)) {
        cout << "True" << "\n";
    }
    else {
        cout << "False" << "\n";
    }

    return 0;
}