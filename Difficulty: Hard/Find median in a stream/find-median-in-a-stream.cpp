//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    private:
    priority_queue<long long> maxHeap;  // lower half numbers
    priority_queue<long long, vector<long long>, greater<long long>> minHeap;  // upper half numbers
    
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        vector<double> result;
        for(int num : arr) {
            // If maxHeap is empty or num is less than maxHeap's top
            if(maxHeap.empty() || num <= maxHeap.top()) {
                maxHeap.push(num);
            } else {
                minHeap.push(num);
            }
            
            // Balance heaps
            // Make sure maxHeap has either equal or one more element than minHeap
            if(maxHeap.size() > minHeap.size() + 1) {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
            else if(minHeap.size() > maxHeap.size()) {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            }
            
            // Calculate median
            double median;
            if(maxHeap.size() > minHeap.size()) {
                median = maxHeap.top();
            } else {
                median = (maxHeap.top() + minHeap.top()) / 2.0;
            }
            result.push_back(median);
        }
        return result;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        vector<double> ans = ob.getMedian(nums);
        cout << fixed << setprecision(1);
        for (auto &i : ans)
            cout << i << " ";
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends