// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

void push(QUEUE<int> &q, int x);

int pop(QUEUE<int> &q);

int getSize(QUEUE<int> &q);


int getBack(QUEUE<int> &q);

int getFront(QUEUE<int> &q);

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        QUEUE<int> s;
        int q;
        cin >> q;
        while (q--) {
            char c;
            cin >> c;
            if (c == 'a') {
                int x;
                cin >> x;
                push(s, x);
            }
            if (c == 'b') {
                cout << pop(s) << " ";
            }
            if (c == 'c') {
                cout << getSize(s) << " ";
            }
            if (c == 'd') {
                cout << getFront(s) << " ";
            }
            if (c == 'e') {
                cout << getBack(s) << " ";
            }


        }
        cout << endl;
    }
    return 0;
}// } Driver Code Ends


/*You are required to complete below methods*/

/*inserts an element x at
the back of the QUEUE q */
void push(QUEUE<int> &q, int x) {
    //Your code here
    q.push(x);
}


/*pop out the front element
from the QUEUE q and returns it */
int pop(QUEUE<int> &q) {
    //Your code here
    if (q.empty()) {
        return -1;
    } else {
        int m = q.front();
        q.pop();
        return m;
    }

}

/*returns the size of the QUEUE q */
int getSize(QUEUE<int> &q) {
    //Your code here
    return q.size();
}

/*returns the last element of the QUEUE */
int getBack(QUEUE<int> &q) {
    //Your code here
    if (q.empty()) {
        return -1;
    } else {
        return q.back();
    }
}

/*returns the first element of the QUEUE */
int getFront(QUEUE<int> &q) {
    //Your code here
    if (q.empty()) {
        return -1;
    } else {
        return q.front();
    }
}
