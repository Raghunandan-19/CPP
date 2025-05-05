#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        // Create an unordered set to store unique elements from the input vector
        unordered_set<int> st;
        
        int n = nums.size();
        
        // If the input vector is empty, return 0 as there are no sequences
        if (n == 0) return 0;

        // Variable to store the length of the longest consecutive sequence
        int longest_sequence = 1; 

        // Insert all elements of the vector into the unordered set
        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        // Iterate through each element in the set
        for (auto it : st) {
            // Check if the current element is the start of a sequence
            if (st.find(it - 1) == st.end()) {

                // Initialize the current sequence length to 1
                int count_current = 1; 
                
                // Start with the current number
                int num = it; 

                // Continue checking for consecutive numbers in the sequence
                while (st.find(num + 1) != st.end()) {
                    num++; // Move to the next number
                    count_current++; // Increment the current sequence length
                }

                // Update the longest sequence length if the current sequence is longer
                longest_sequence = max(longest_sequence, count_current);
            }
        }

        // Return the length of the longest consecutive sequence
        return longest_sequence;
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

    Solution sol;
    cout << sol.longestConsecutive(nums) << "\n";

    return 0;
}