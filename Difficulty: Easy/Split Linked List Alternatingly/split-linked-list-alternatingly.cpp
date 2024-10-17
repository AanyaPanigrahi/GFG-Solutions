//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/

class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        Node* a = nullptr;
    Node* b = nullptr;
    Node* tailA = nullptr;
    Node* tailB = nullptr;
    bool toggle = true;

    while (head) {
        if (toggle) {
            if (!a) {
                a = head;
                tailA = a;
            } else {
                tailA->next = head;
                tailA = tailA->next;
            }
        } else {
            if (!b) {
                b = head;
                tailB = b;
            } else {
                tailB->next = head;
                tailB = tailB->next;
            }
        }
        head = head->next;
        toggle = !toggle;
    }

    if (tailA) tailA->next = nullptr;
    if (tailB) tailB->next = nullptr;

    return {a, b};
    }
};


//{ Driver Code Starts.

void printList(struct Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;

        while (ss >> number) {
            arr.push_back(number);
        }

        struct Node* head = new Node(arr[0]);
        struct Node* tail = head;

        for (int i = 1; i < arr.size(); ++i) {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }

        Solution ob;
        vector<Node*> result = ob.alternatingSplitList(head);
        printList(result[0]);
        printList(result[1]);
    }

    return 0;
}

// } Driver Code Ends