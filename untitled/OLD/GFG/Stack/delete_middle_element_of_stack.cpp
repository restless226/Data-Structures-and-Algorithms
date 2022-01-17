// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends


//User function template for C++

class Solution {
public:
    void deleteMid(stack<int> &s, int sizeOfStack) {
        // code here
        int x;
        if (sizeOfStack % 2 != 0) {
            x = (sizeOfStack + 1) / 2;
        } else {
            x = (sizeOfStack + 2) / 2;
        }

        int q = s.size() - 1;
        int a[q];
        int c = 1;
        int m = 0;
        while (!s.empty()) {
            if (c != x) {
                a[m] = s.top();
                m++;
            }
            s.pop();
            c++;
        }

        for (int k = q - 1; k >= 0; k--) {
            s.push(a[k]);
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int sizeOfStack;
        cin >> sizeOfStack;

        stack<int> myStack;

        for (int i = 0; i < sizeOfStack; i++) {
            int x;
            cin >> x;
            myStack.push(x);
        }

        Solution ob;
        ob.deleteMid(myStack, myStack.size());
        while (!myStack.empty()) {
            cout << myStack.top() << " ";
            myStack.pop();
        }
        cout << endl;
    }
    return 0;
}