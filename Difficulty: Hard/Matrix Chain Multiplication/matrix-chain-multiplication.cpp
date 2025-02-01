//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    
    int mcmrec(vector<int>&arr, int i, int j,vector<vector<int>>& dp){
        
        if(i+1==j) return 0;
        int res=INT_MAX;
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        for(int k=i+1;k<j;k++){
            int curr=mcmrec(arr,i,k,dp)+mcmrec(arr,k,j,dp)+arr[i]*arr[k]*arr[j];
            res=min(curr,res);
        }
        dp[i][j]=res;
        return res;
    }
    
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        int ans= mcmrec(arr,0,n-1,dp);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // to ignore the newline after the integer input
    while (t--) {
        int n;
        vector<int> a;
        string input;

        // Input format: first number n followed by the array elements
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.matrixMultiplication(a) << endl << "~\n";
    }

    return 0;
}

// } Driver Code Ends