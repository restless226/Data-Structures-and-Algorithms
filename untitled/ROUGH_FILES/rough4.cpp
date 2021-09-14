// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
public:
    //Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *a, int n, int k) {
        // your code here
        int i = 0;    // window back pointer
        int j = 0;    // window front pointer
        vector<int> ans;
        deque<int> dq;

        while (j < n) {
            // calculation for j
            while (!dq.empty() && dq.back() < arr[j]) {
                dq.pop_back();
            }
            dq.push_back(arr[j]);

            if (j - i + 1 < K) {
                j++;
            } else if (j - i + 1 == K) {
                // calculation for ans
                ans.push_back(dq.front());

                // calculation for i
                if (dq.front() == arr[i]) {
                    dq.pop_front();
                }

                // to slide the window further
                i++;
                j++;
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

        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;

    }

    return 0;
}  // } Driver Code Ends