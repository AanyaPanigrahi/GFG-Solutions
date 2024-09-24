//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    bool isValid(string& s, string& p, int mid, int& start) {
    int count[256];
    memset(count, 0, sizeof(count));

    int distinct = 0;

    for (char x : p) {
        if (count[x] == 0)
            distinct++;
        count[x]++;
    }

    int curr_count = 0;
    for (int i = 0; i < s.size(); i++) {
        count[s[i]]--;
        if (count[s[i]] == 0) {
            curr_count++;
        }

        if (i >= mid) {
            count[s[i - mid]]++;
            if (count[s[i - mid]] == 1) {
                curr_count--;
            }
        }

        if (i >= mid - 1) {
            if (curr_count == distinct) {
                start = (i - mid) + 1;
                return true;
            }
        }
    }

    return false;
}
    
string smallestWindow (string s, string p)
    {
       int m = s.length();
    int n = p.length();

    if (m < n) return "-1"; 

    int minLength = INT_MAX;

    int low = n, high = m; 

    int idx = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int start;

        if (isValid(s, p, mid, start)) {
            if (mid < minLength) {
                minLength = mid;
                idx = start;
            }
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (idx == -1) return "-1";

    return s.substr(idx, minLength);
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends