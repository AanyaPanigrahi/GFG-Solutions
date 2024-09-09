//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& a) {
        // code here
        int n=a.size();
        int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            c0 += 1;
        }
        else if (a[i] == 1) {
            c1 += 1;
        }
        else {
            c2 += 1;
        }
    }

    int idx = 0;
    for (int i = 0; i < c0; i++)
        a[idx++] = 0;

    for (int i = 0; i < c1; i++)
        a[idx++] = 1;

    for (int i = 0; i < c2; i++)
        a[idx++] = 2;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> a;
        string input;
        int num;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            a.push_back(num);
        }
        Solution ob;
        ob.sort012(a);

        int n = a.size();
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends