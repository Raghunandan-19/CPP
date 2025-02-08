#include <bits/stdc++.h>
using namespace std;

int main() {
    // max heap
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.emplace(5);
    pq.emplace(69);
    
    cout << pq.top() << "\n";
    pq.pop();
    cout << pq.top() << "\n";
    
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";

    // min heap
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(10);
    pq1.push(20);
    pq1.emplace(5);
    pq1.emplace(69);
    
    cout << pq1.top() << "\n";
    pq1.pop();
    cout << pq1.top() << "\n";
    
    while (!pq1.empty()) {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << "\n";

    return 0;
}