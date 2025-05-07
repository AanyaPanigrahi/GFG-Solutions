//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) {
        // code here
        int d=arr[1]-arr[0];
        int d2=arr[2]-arr[1];
        int n=arr.size()-2;
        if (d>d2){
            return (arr[0]+arr[1])/2;
        }else{
            for(int i=1;i<=n;i++){
                int ddd=arr[i+1]-arr[i];
                if(ddd>d){
                    return (arr[i+1]+arr[i])/2;
                }
            }
        }
        return arr[arr.size()-1]+d;
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
        cout << ob.findMissing(arr) << "\n";
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends