//{ Driver Code Starts
// C++ implementation to convert infix expression to postfix
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to convert an infix expression to a postfix expression.
    int prec(char c){
        if(c=='^') return 3;
        if(c=='*' || c=='/') return 2;
        if(c=='+' || c=='-') return 1;
        return 0;
    }
    
    string infixToPostfix(string s) {
        // Your code here
        stack<char> st;
        string answer;
        for(int i=0;i<s.length();i++){
            
            char c=s[i];
            
            if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
                answer+=c;
            }
            
            else if(c=='('){
                st.push(c);
            }
            
            else if(c==')'){
                while(st.top()!='('){
                    answer+=st.top();
                    st.pop();
                }
                st.pop();
            }
            
            else{
                while(!st.empty() && prec(c)<=prec(st.top())){
                    answer+=st.top();
                    st.pop();
                }
                st.push(c);
            }
        }
        while(!st.empty()){
            answer+=st.top();
            st.pop();
        }
        
        return answer;

    }
};


//{ Driver Code Starts.
// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string exp;
        cin >> exp;
        Solution ob;
        cout << ob.infixToPostfix(exp) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends