//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        if (arr.size() < 2) return {}; // If less than two elements, return empty array.

    sort(arr.begin(), arr.end()); // Sort the array.
    int left = 0, right = arr.size() - 1;
    int closestSum = INT_MAX, maxAbsDiff = 0;
    vector<int> result;

    while (left < right) {
        int sum = arr[left] + arr[right];
        int diff = abs(sum - target);

        if (diff < closestSum || (diff == closestSum && (arr[right] - arr[left] > maxAbsDiff))) {
            closestSum = diff;
            maxAbsDiff = arr[right] - arr[left];
            result = {arr[left], arr[right]};
        }

        if (sum < target) {
            left++; // Move left pointer to increase sum.
        } else {
            right--; // Move right pointer to decrease sum.
        }
    }

    return result;
    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends