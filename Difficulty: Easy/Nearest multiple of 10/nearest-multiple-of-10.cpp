//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        int len = str.length();
    if (len == 0) return str;

    int lastDigit = str[len - 1] - '0';
    str.pop_back(); 

    if (lastDigit > 5) {
        int carry = 1, i = len - 2;
        while (i >= 0 && carry) {
            if (str[i] == '9') {
                str[i] = '0';
            } else {
                str[i]++;
                carry = 0;
            }
            i--;
        }
        if (carry) str = "1" + str;
    }

    str += '0'; 
    return str;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.roundToNearest(str) << endl;
    }

    return 0;
}
// } Driver Code Ends