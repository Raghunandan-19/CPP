#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> mpp;

    mpp.insert({1, "Raghu"});
    mpp.insert({2, "Raj Vikramaditya"});
    mpp.insert({3, "Striver"});
    mpp.insert({4, "Hitesh"});
    mpp.insert({5, "Harkirat"});

    for (auto it : mpp) {
        cout << it.first << "->" << it.second << "\n";
    }

    auto it1 = mpp.find(4);
    cout << it1->first << "->" <<  it1->second << "\n";

    return 0;
}