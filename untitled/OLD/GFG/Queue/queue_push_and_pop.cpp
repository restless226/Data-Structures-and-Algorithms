// { Driver Code Starts
//Initial Template for C++
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

QUEUE<int> _push(int arr[], int n);


void _pop(QUEUE<int> s);


// } Driver Code Ends


//User function Template for C++


//User function Template for C++

QUEUE<int> _push(int arr[], int n) {
    //return a QUEUE with all elements of arr inserted in it
    int front, rear = 0;
    QUEUE<int> myQueue;
    for (int i = 0; i < n; i++) {
        myQueue.push(arr[rear]);
        rear++;
    }
    return myQueue;
}

void _pop(QUEUE<int> s) {
    //print front and DEQUE for each element until it becomes empty
    int size = s.size();
    for (int i = 0; i < size; i++) {
        cout << s.front() << " ";
        s.pop();
    }

}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        QUEUE<int> mys = _push(arr, n);
        _pop(mys);
        cout << endl;


    }
    return 0;
}

// } Driver Code Ends