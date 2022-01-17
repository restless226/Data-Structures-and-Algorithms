/*
PROBLEM STATEMENT:
Given a stack with push(), pop(), empty() operations,
delete the middle of the stack without using any additional data structure.
Middle: ceil(size_of_stack/2.0)
*/

#include<bits/stdc++.h>

#define int long long
using namespace std;

class Solution {
public:
    void remove(stack<int> &s, int sizeTillMid) {
        if (sizeTillMid == s.size()) {
            s.pop();
        } else {
            int temp = s.top();
            s.pop();
            remove(s, sizeTillMid);
            s.push(temp);
        }
    }

    void deleteMid(stack<int> &s, int sizeOfStack) {
        if (!s.empty()) {
            int sizeTillMid = ceil((float) sizeOfStack / 2.0);
            remove(s, sizeTillMid);
        }
    }
};

int32_t main() {
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

/*
INPUT:
3
4
1 2 3 4
5
1 2 3 4 5
5
5 2 4 1 3

OUTPUT:
4 3 1
5 4 2 1
3 1 2 5
*/