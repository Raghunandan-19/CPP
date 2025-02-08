#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> st;

    st.insert(21);
    st.insert(56);
    st.insert(21);
    st.insert(69);
    st.insert(7);
    st.insert(99);

    for (auto it : st) {
        cout << it << " ";
    }
    cout << "\n";

    cout << st.count(21) << "\n";

    st.erase(21);

    for (auto it : st) {
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}