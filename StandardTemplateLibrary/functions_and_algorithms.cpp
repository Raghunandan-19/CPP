#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[]) {
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void learnSort() {
    int arr[5] = {5, 4, 3, 2, 1};
    sort(arr, arr + 5);
    printArray(arr);
}

void learnAccumulate() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << accumulate(arr, arr + 5, 0) << "\n";
}

void learnCount() {
    int arr[5] = {1, 2, 1, 4, 1};
    cout << count(arr, arr + 5, 1) << "\n";
}

void learnFind() {
    int arr[5] = {1, 2, 3, 4, 5};
    auto it = find(arr, arr + 5, 4);
    cout << *it << "\n";
}

void learnNextPermutation() {
    string str = "abc";

    do {
        cout << str << "\n";
    } while (next_permutation(str.begin(), str.end()));
}

void learnMaxAndMinElement() {
    int arr[] = {3, 4, 5, 1, 2};
    auto it = *max_element(arr, arr + 5);
    cout << it << "\n";

    auto it1 = min_element(arr, arr + 5);
    cout << *it1 << "\n";
}

void learnReverse() {
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr, arr + 5);
    printArray(arr);
}

void learnPow() {
    cout << pow(2, 3) << "\n";
}

bool internalComparator(pair<int, int> el1, pair<int, int> el2) {
    if (el1.second > el2.second) return true;
    if (el1.second < el2.second) return false;
    if (el1.first < el2.first) return true;
    return false;
}

void learnCustomComparator() {
    pair<int, int> arr[5] = {{1, 5}, {0, 4}, {3, 1}, {2, 1}, {4, 9}};
    sort(arr, arr + 5, internalComparator);
    for (auto it : arr) {
        cout << it.first << "->" << it.second << "\n";
    }
}

int main() {
    learnSort();
    learnAccumulate();
    learnCount();
    learnFind();
    learnNextPermutation();
    learnMaxAndMinElement();
    learnReverse();
    learnPow();
    learnCustomComparator();
    return 0;
}