#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << ptr << "\n";
    cout << &a << "\n";

    cout << &ptr << "\n";

    float price = 100.25;
    float *ptr1 = &price;
    
    cout << ptr1 << "\n";
    cout << &price << "\n";

    cout << &ptr1 << "\n";

    float **ptr2 = &ptr1;
    cout << ptr2 << "\n";
    cout << &ptr1 << "\n";

    return 0;
}