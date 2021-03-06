// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

class QueueStack {
private:
    QUEUE<int> q1;
    QUEUE<int> q2;
public:
    void push(int);

    int pop();
};


int main() {
    int T;
    cin >> T;
    while (T--) {
        QueueStack *qs = new QueueStack();

        int Q;
        cin >> Q;
        while (Q--) {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1) {
                int a;
                cin >> a;
                qs->push(a);
            } else if (QueryType == 2) {
                cout << qs->pop() << " ";

            }
        }
        cout << endl;
    }
}
// } Driver Code Ends


/* The structure of the class is
class QueueStack{
private:
    QUEUE<int> q1;
    QUEUE<int> q2;
public:
    void push(int);
    int pop();
};
 */

/* The method push to push element into the stack */
void QueueStack::push(int x) {
    // Your Code
    q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack::pop() {
    // Your Code
    while (!q1.empty()) {

    }
}