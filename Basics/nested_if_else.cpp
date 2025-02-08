#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c) {
            cout << "Greatest is a" << "\n";
        }
        else {
            cout << "Gratest is c" << "\n";
        }
    }
    else if (b >= c) {
        cout << "Greatest is b" << "\n";
    }
    else {
        cout << "Greatest is c" << "\n";
    }

    return 0;
}