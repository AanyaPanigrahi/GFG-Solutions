//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        if( arr.size()<2){
            return -1;
        }
        int large=INT_MIN,sec=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>large){
                sec=large;
                large=arr[i];
            }
            else if(arr[i]>sec && arr[i] != large){
                sec=arr[i];
            }
        }
        if(sec==large){
            return -1;
        }else{
            return sec;
        }
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends