// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution {

public:
    long long ValidPair(int a[], int n) {
        // Your code goes here
        long long int ans = 0;
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++) {
            if (a[i] <= 0) {
                for (int j = i + 1; j < n; j++) {
                    if (a[i] + a[j] > 0) {
                        ans += (n - j);
                        break;
                    }
                }
            } else {
                ans += (n - i - 1) * (n - i) / 2;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.ValidPair(array, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends