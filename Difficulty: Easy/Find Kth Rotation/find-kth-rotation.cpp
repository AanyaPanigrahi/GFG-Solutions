//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int l=0,h=arr.size()-1;
        int mini=INT_MAX;
        int ans=0;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[l]<=arr[mid]){
                if(arr[l]<=mini){
                    mini=arr[l];
                    ans=l;
                }
                l=mid+1;
            }else{
                if(arr[mid]<=mini){
                    mini=arr[mid];
                    ans=mid;
                }
                h=mid-1;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends