//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
    int merge_and_count(vector<int>& arr, vector<int>& temp_arr, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    int inv_count = 0;
    
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp_arr[k] = arr[i];
            i++;
        } else {
            temp_arr[k] = arr[j];
            inv_count += (mid - i + 1); 
            j++;
        }
        k++;
    }
    
    
    while (i <= mid) {
        temp_arr[k] = arr[i];
        i++;
        k++;
    }
    
    while (j <= right) {
        temp_arr[k] = arr[j];
        j++;
        k++;
    }
    
    for (i = left; i <= right; i++) {
        arr[i] = temp_arr[i];
    }
    
    return inv_count;
}

int merge_count_split_inv(vector<int>& arr, vector<int>& temp_arr, int left, int right) {
    int inv_count = 0;
    if (left < right) {
        int mid = (left + right) / 2;
        
        inv_count += merge_count_split_inv(arr, temp_arr, left, mid);
        inv_count += merge_count_split_inv(arr, temp_arr, mid + 1, right);
        inv_count += merge_and_count(arr, temp_arr, left, mid, right);
    }
    return inv_count;
}

    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int n = arr.size();
    vector<int> temp_arr(n);
    return merge_count_split_inv(arr, temp_arr, 0, n - 1);
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends