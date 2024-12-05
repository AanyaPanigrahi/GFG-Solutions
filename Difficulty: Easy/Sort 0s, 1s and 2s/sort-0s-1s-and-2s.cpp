//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int j=0;
        int temp;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                temp=arr[j];
                arr[j++]=0;
                arr[i]=temp;
            }
        }
        for(int k=j;k<arr.size();k++){
            if(arr[k]==1){
                temp=arr[j];
                arr[j++]=1;
                arr[k]=temp;
            }
        }
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
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends