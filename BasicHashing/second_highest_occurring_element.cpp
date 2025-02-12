#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        unordered_map<int, int> mpp;

        for (auto num : nums) {
            mpp[num]++;
        }

        int highestOccuring = -1;
        int secondHighestOccuring = -1;
        int highestFrequency = -1;
        int secondHighestFrequency = -1;

        for (auto it : mpp) {
            int element = it.first;
            int frequency = it.second;

            if (frequency > highestFrequency) {
                secondHighestOccuring = highestOccuring;
                secondHighestFrequency = highestFrequency;
                highestOccuring = element;
                highestFrequency = frequency;
            }
            else if (frequency == highestFrequency) {
                highestOccuring = min(highestOccuring, element);
            }
            else if (frequency > secondHighestFrequency) {
                secondHighestOccuring = element;
                secondHighestFrequency = frequency;
            }
            else if (frequency == secondHighestFrequency) {
                secondHighestOccuring = min(secondHighestOccuring, element);
            }
        }

        return secondHighestOccuring;
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
    cout << sol.secondMostFrequentElement(nums) << "\n";

    return 0;
}