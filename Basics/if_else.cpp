#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "Adult" << "\n";
    }
    else {
        cout << "Not an Adult" << "\n";
    }

    return 0;
}