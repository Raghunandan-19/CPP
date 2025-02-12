#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int> &nums) {
        unordered_map<int, int> mpp;

        for (auto num : nums) {
            mpp[num]++;
        }

        int highestOccuring = 0;
        int highestFrequency = 0;

        for (auto it : mpp) {
            int element = it.first;
            int frequency = it.second;

            if (frequency > highestFrequency) {
                highestOccuring = element;
                highestFrequency = frequency;
            }
            else if (frequency == highestFrequency) {
                highestOccuring = min(element, highestOccuring);
            }
        }

        return highestOccuring;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    Solution sol;
    cout << sol.mostFrequentElement(nums) << "\n";

    return 0;
}