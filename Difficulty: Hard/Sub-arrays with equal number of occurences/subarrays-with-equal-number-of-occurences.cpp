//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        // code here
        unordered_map<int, int> hashMap;
    int countX = 0, countY = 0;
    int result = 0;
    hashMap[0] = 1;  

    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == x) countX++;
        if (arr[i] == y) countY++;
        
        int diff = countX - countY;

        if (hashMap.find(diff) != hashMap.end()) {
            result += hashMap[diff];
        }

        hashMap[diff]++;
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
        int x = stoi(ks);
        string ks1;
        getline(cin, ks1);
        int y = stoi(ks1);
        Solution ob;
        int ans = ob.sameOccurrence(arr, x, y);
        cout << ans << "\n";
        // cout<<"~"<<endl;
    }
    return 0;
}
// } Driver Code Ends