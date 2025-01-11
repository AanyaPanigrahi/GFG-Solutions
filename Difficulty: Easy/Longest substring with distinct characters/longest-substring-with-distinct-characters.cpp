//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
    int longestUniqueSubstr(string &s) {
        // code here
        unordered_map<char, int> lastIndex; // Stores the last index of each character
    int maxLength = 0, start = 0;

    for (int end = 0; end < s.size(); end++) {
        // If the character is repeated, move the start pointer
        if (lastIndex.find(s[end]) != lastIndex.end() && lastIndex[s[end]] >= start) {
            start = lastIndex[s[end]] + 1;
        }
        lastIndex[s[end]] = end; // Update the last index of the character
        maxLength = max(maxLength, end - start + 1); // Calculate the max length
    }
    return maxLength;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends