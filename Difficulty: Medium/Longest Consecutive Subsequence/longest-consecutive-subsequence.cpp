//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> elements(arr.begin(), arr.end());
    int longest = 0;

    for (int num : elements) {
        if (elements.find(num - 1) == elements.end()) { // Start of a sequence
            int currentNum = num;
            int count = 1;

            while (elements.find(currentNum + 1) != elements.end()) {
                currentNum++;
                count++;
            }

            longest = max(longest, count);
        }
    }

    return longest;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.longestConsecutive(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends