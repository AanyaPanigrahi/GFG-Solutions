//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        long long n = arr.size();
        long long SN = (n*(n+1))/2;
        long long SqN = (n*(n+1)*(2*n+1))/6;
        long long S=0,Sq=0;
        
        for(int i=0;i<n;i++){
            S+=arr[i];
            Sq+=(long long)arr[i]*(long long)arr[i];
        }
        
        long long diffsum=S-SN;
        long long diffsq=Sq-SqN;
        diffsq=diffsq/diffsum;
        
        long long x=(diffsq+diffsum)/2;
        long long y=x-diffsum;
        return {(int)x,(int)y};
    
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends