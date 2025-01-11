//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    string clockwise(string s){
        char first=s[s.size()-1];
        for(int i=s.size()-2;i>=0;i--){
            s[i+1]=s[i];
            if(i==0){
                i=-1;
            }
        }
        s[0]=first;
        return s;
    }
    
    string anticlock(string s){
    
        char last=s[0];
        for(int i=0;i<s.size()-1;i++){
            s[i]=s[i+1];
            
        }
        s[s.size()-1]=last;
        return s;
    }
    
    bool isRotated(string& s1, string& s2) {
        // Your code here
        string s1clock=clockwise(clockwise(s1));
        string s1anti=anticlock(anticlock(s1));
        if(s1clock==s2){
            return true;
        }
        if(s1anti==s2){
            return true;
        }
        return false;
        
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends