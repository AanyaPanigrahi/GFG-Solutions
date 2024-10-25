//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        // Your code goes here
    int n = arr.size();
    
    sort(arr.begin(), arr.end());
    
    vector<int> result(n);
    
    int left = 0;      
    int right = n - 1;  
    bool isLargest = true; 
    
    for(int i = 0; i < n; i++) {
        if(isLargest) {
            result[i] = arr[right];
            right--;
        } else {
            result[i] = arr[left];
            left++;
        }
        isLargest = !isLargest;
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
        Solution obj;
        vector<int> ans = obj.alternateSort(arr);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends