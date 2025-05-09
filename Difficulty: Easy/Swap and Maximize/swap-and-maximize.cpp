//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// long long int maxSum(int arr[], int n);

// } Driver Code Ends
class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        // code here
        int n = arr.size();
    sort(arr.begin(), arr.end());

    vector<int> temp;
    int left = 0, right = n - 1;

    while (left <= right) {
        if (left == right) {
            temp.push_back(arr[left]);
        } else {
            temp.push_back(arr[left]);
            temp.push_back(arr[right]);
        }
        left++;
        right--;
    }

    long long maxSum = 0;
    for (int i = 0; i < n - 1; ++i) {
        maxSum += abs(temp[i] - temp[i + 1]);
    }
    maxSum += abs(temp[n - 1] - temp[0]);  // Circular difference

    return maxSum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To ignore any newline character left in the buffer
    while (t--) {
        string line;
        getline(cin, line); // Read the entire line of input
        stringstream ss(line);
        vector<int> arr;
        int num;

        // Parse the input line into integers and add to the vector
        while (ss >> num) {
            arr.push_back(num);
        }

        Solution ob;
        long long ans = ob.maxSum(arr);

        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends