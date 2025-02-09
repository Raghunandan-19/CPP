#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << ptr << "\n";
    ptr++;
    ptr = ptr + 2;
    cout << ptr << "\n";

    int *ptr2;
    int *ptr1 = ptr2 + 2;

    cout << ptr1 - ptr2 << "\n";

    int *ptr4;

    cout << ptr2 << "\n";
    cout << ptr4 << "\n";

    cout << (ptr2 < ptr4) << "\n";
    cout << (ptr2 <= ptr4) << "\n";
    cout << (ptr2 > ptr4) << "\n";
    cout << (ptr2 >= ptr4) << "\n";
    cout << (ptr2 == ptr4) << "\n";
    cout << (ptr2 != ptr4) << "\n";

    return 0;
}