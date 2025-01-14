//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int totalSum = 0, leftSum = 0;

        // Calculate total sum of the array
        for (int num : arr) {
            totalSum += num;
        }

        // Traverse the array to find the equilibrium point
        for (int i = 0; i < arr.size(); ++i) {
            // Check if current index is an equilibrium point
            if (leftSum == totalSum - leftSum - arr[i]) {
                return i; // 0-based index
            }
            // Update the leftSum for the next iteration
            leftSum += arr[i];
        }

        return -1; 
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.findEquilibrium(arr) << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends