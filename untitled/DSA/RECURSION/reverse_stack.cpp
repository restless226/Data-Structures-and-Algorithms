/*
PROBLEM STATEMENT:
Given a stack, the task is to reverse it without using extra space (another stack)
*/

#include<bits/stdc++.h>

#define int long long
using namespace std;

class SortedStack {
public:
    stack<int> s;

    void reverse();

    void insert(int element);
};

void SortedStack::insert(int element) {
    if (s.empty()) {
        s.push(element);
    } else {
        int temp = s.top();
        s.pop();
        insert(element);
        s.push(temp);
    }
}

void SortedStack::reverse() {
    if (s.size() > 1) {
        int element = s.top();
        s.pop();
        reverse();
        insert(element);
    }
}

void printStack(stack<int> s) {
    while (!s.empty()) {
        printf("%d ", s.top());
        s.pop();
    }
    printf("\n");
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        SortedStack *ss = new SortedStack();
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            ss->s.push(k);
        }
        ss->reverse();
        printStack(ss->s);
    }
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
1 2 3 4
1 2 3 4 5
5 2 4 1 3
*/