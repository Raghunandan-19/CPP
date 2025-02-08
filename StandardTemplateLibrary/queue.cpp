#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.emplace(3);
    q.emplace(4);

    cout << q.front() << "\n";

    q.pop();

    cout << q.front() << "\n";

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << "\n";

    return 0;
}