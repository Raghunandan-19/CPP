#include <bits/stdc++.h>
using namespace std;

class Solution {
private:
    int countStudents(vector<int> &nums, int pages) {
        int n = nums.size();
        int students = 1;
        int pages_student = 0;

        for (int i = 0; i < n; i++) {
            if ((pages_student + nums[i]) <= pages) {
                pages_student += nums[i];
            }
            else {
                students++;
                pages_student = nums[i];
            }
        }

        return students;
    }
public:
    int findPages(vector<int> &nums, int m) {
        // Get the size of the array
        int n = nums.size();

        // Edge case: If we need more students than books, it's impossible
        if (m > n) return -1;

        /* Initialize binary search boundaries:
           low: minimum possible answer (maximum value in array - can't be less than that)
           high: maximum possible answer (sum of all pages - one student reads all books) */
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        // Binary search
        while (low <= high) {
            // Calculate middle value (avoid overflow)
            int mid = low + (high - low) / 2;

            /* If current mid-value requires more than m students,
               we need to increase the pages per student (move right) */
            if (countStudents(nums, mid) > m) {
                low = mid + 1;
            }
            /* If we can allocate books with <= m students,
               try to minimize the maximum pages (move left) */
            else {
                high = mid - 1;
            }
        }

        // low is the minimum number of maximum pages
        return low;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    int m;
    cin >> m;

    Solution sol;
    cout << sol.findPages(nums, m) << "\n";

    return 0;
}