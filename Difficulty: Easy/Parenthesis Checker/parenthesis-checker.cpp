//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool isBalanced(string& s) {
        // code here
        stack<char> brackets;
        
        unordered_map<char, char> bracketPairs = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        
        for(char c : s) {
            if(c == '(' || c == '{' || c == '[') {
                brackets.push(c);
            }
            else {
                if(brackets.empty()) {
                    return false;
                }
                
                if(brackets.top() == bracketPairs[c]) {
                    brackets.pop();
                } else {
                    return false;  
                }
            }
        }
        
        return brackets.empty();
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    string a;
    cin >> t;
    while (t--) {
        cin >> a;
        Solution obj;
        if (obj.isBalanced(a))
            cout << "true" << endl;
        else
            cout << "false" << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends