#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> st;

    st.insert(21);
    st.insert(56);
    st.insert(21);
    st.insert(69);
    st.insert(7);

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

    auto it = st.lower_bound(7);
    cout << *it << "\n";

    auto it1 = st.upper_bound(7);
    cout << *it1 << "\n";

    return 0;
}