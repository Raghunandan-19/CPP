#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr << "\n";

    for (int i = 0; i < 5; i++) {
        cout << *(arr + i) << " ";
    }
    cout << "\n";

    for (int i = 0; i < 5; i++) {
        cout << arr + i << "\n";
    }
    cout << "\n";

    cout << arr + 4 << "\n";

    return 0;
}