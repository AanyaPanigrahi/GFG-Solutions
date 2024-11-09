//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  string addStrings(string a, string b) {
    int carry = 0, i = a.size() - 1, j = b.size() - 1;
    string result = "";
    
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result += (sum % 10) + '0';
        carry = sum / 10;
    }
    
    reverse(result.begin(), result.end());
    return result;
}

    string minSum(vector<int> &arr) {
        sort(arr.begin(), arr.end());
    string num1 = "", num2 = "";
    
    for (int i = 0; i < arr.size(); i++) {
        if (i % 2 == 0)
            num1 += to_string(arr[i]);
        else
            num2 += to_string(arr[i]);
    }
    
    string sum = addStrings(num1, num2);
    
    int start = 0;
    while (start < sum.size() - 1 && sum[start] == '0') {
        start++;
    }
    return sum.substr(start);
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        Solution ob;
        string ans = ob.minSum(a);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends