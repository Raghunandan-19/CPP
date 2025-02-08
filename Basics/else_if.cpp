#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks >= 90) {
        cout << "Grade A" << "\n";
    } 
    else if (marks >= 70) {
        cout << "Grade B" << "\n";
    }
    else if (marks >= 50) {
        cout << "Grade C" << "\n";
    }
    else if (marks >= 35) {
        cout << "Grade D" << "\n";
    }
    else {
        cout << "Fail" << "\n";
    }

    return 0;
}