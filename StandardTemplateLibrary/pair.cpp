#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> pr1 = {2, 8};

    cout << pr1.first << " -> " << pr1.second << "\n";

    pair<pair<int, int>, int> pr2 = {{1, 5}, 9};
    cout << pr2.first.second << "\n";

    return 0;
}