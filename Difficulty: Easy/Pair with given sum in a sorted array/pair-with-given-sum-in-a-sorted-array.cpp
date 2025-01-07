//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        int count = 0;
        int left = 0;
        int right = arr.size() - 1;
        
        while (left < right) {
            int currentSum = arr[left] + arr[right];
            
            if (currentSum == target) {
                // If elements at left and right are same
                if (arr[left] == arr[right]) {
                    int elementsBetween = right - left + 1;
                    count += (elementsBetween * (elementsBetween - 1)) / 2;
                    break;
                }
                // If elements are different
                else {
                    // Count elements equal to left value
                    int leftCount = 1;
                    while (left + 1 < right && arr[left] == arr[left + 1]) {
                        leftCount++;
                        left++;
                    }
                    
                    // Count elements equal to right value
                    int rightCount = 1;
                    while (right - 1 > left && arr[right] == arr[right - 1]) {
                        rightCount++;
                        right--;
                    }
                    
                    // Total pairs will be product of leftCount and rightCount
                    count += leftCount * rightCount;
                    
                    left++;
                    right--;
                }
            }
            else if (currentSum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends