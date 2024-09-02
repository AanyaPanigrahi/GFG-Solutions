//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int arr[],  int N, int k) 
    { 
        // Complete the function
        unordered_map<int, int> prefixSumMap;
        int sum = 0, maxLength = 0;

        for (int i = 0; i < N; i++) {
        sum += arr[i];

        if (sum == k)
            maxLength = i + 1;

        if (prefixSumMap.find(sum) == prefixSumMap.end())
            prefixSumMap[sum] = i;

        if (prefixSumMap.find(sum - k) != prefixSumMap.end())
            maxLength = max(maxLength, i - prefixSumMap[sum - k]);
    }

    return maxLength;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends