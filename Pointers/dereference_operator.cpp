#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << *(&a) << "\n";
    cout << *ptr << "\n";

    int **parPtr = &ptr;
    cout << **parPtr << "\n"; 

    return 0;
}