#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    cout << str.size() << "\n";

    for (int i = 0; i < str.size(); i++) {
        cout << str[i] << "\n";
    }

    return 0;
}