#include <bits/stdc++.h>
using namespace std;

void changeA(int *ptr) {
    *ptr = 20;
}

void changeB(int &c) {
    c = 30;
}

int main() {
    int a = 10;
    changeA(&a);
    cout << a << "\n";

    int b = 10;
    changeB(b);
    cout << b << "\n";

    return 0;
}