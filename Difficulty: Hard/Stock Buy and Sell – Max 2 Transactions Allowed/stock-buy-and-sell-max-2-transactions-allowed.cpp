//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int n = prices.size();
    if (n <= 1) return 0;
    vector<vector<int>> dp(3, vector<int>(n, 0));
    
    for (int k = 1; k <= 2; k++) {
        
        int maxDiff = -prices[0];
        
        for (int i = 1; i < n; i++) {
            dp[k][i] = max(dp[k][i-1], prices[i] + maxDiff);
            
            maxDiff = max(maxDiff, dp[k-1][i] - prices[i]);
        }
    }
    
    return dp[2][n-1];
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
        int res = ob.maxProfit(arr);

        cout << res << endl << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends