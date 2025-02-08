#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    v.push_back(6);
    v.push_back(7);
    v.emplace_back(8);
    v.emplace_back(9);

    cout << v.front() << "\n";

    cout << v.back() << "\n";

    vector<int>::iterator beginItr = v.begin();
    vector<int>::iterator endItr = v.end();

    for (vector<int>::iterator it = beginItr; it < endItr; it++) {
        cout << *(it) << " ";
    }
    cout << "\n";

    for (auto it : v) {
        cout << it << " ";
    }
    cout << "\n";

    v.erase(v.end() - 1);

    for (auto it : v) {
        cout << it << " ";
    }
    cout << "\n";

    v.insert(v.end(), 9);
    for (auto it : v) {
        cout << it << " ";
    }
    cout << "\n";

    cout << v.size() << "\n";

    cout << v[5] << "\n";

    vector<int> v2 = {1, 2, 3};
    vector<int> v3 = {4, 5, 6};
    swap(v2, v3);
    for (auto it : v3) {
        cout << it << " ";
    }
    cout << "\n";

    vector<int> v4(v);
    for (auto it : v4) {
        cout << it << " ";
    }
    cout << "\n";

    v4.clear();

    cout << v4.size() << "\n";

    return 0;
}