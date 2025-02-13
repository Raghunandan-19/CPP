#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int partition(vector<int> &nums, int low, int high) {
        int pivot = nums[low];
        int i = low;
        int j = high;    

        while (i < j) {
            while (nums[i] <= pivot && i <= high - 1) {
                i++;
            }

            while (nums[j] > pivot && j >= low + 1) {
                j--;
            }

            if (i < j) {
                swap(nums[i], nums[j]);
            }
        }

        swap(nums[low], nums[j]);

        return j;
    }

    void quickSortHelper(vector<int> &nums, int low, int high) {
        if (low < high) {
            int pIndex = partition(nums, low, high);
            quickSortHelper(nums, low, pIndex - 1);
            quickSortHelper(nums, pIndex + 1, high);
        }   
    }
public:
    vector<int> quickSort(vector<int> &nums) {
        quickSortHelper(nums, 0, nums.size() - 1);
        return nums;
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
    for (auto num : sol.quickSort(nums)) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}