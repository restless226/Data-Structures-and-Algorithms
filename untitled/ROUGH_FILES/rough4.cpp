//// { Driver Code Starts
////Initial template for C++
//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//// } Driver Code Ends
////User function template for C++
//
//class Solution {
//public:
//
//    int solve(vector<vector<int> > &mat, int n) {
//
//        unordered_map<int, int> mp;
//        for (int i = 0; i < n - 1; i++) {
//            for (int j = i + 1; j < n; j++) {
//                if (mat[i][j] == 1 && mat[j][i] == 0) {
//                    mp[j]++;
//                } else if (mat[i][j] == 0 && mat[j][i] == 1) {
//                    mp[i]++;
//                }
//            }
//        }
//
//        int flag = -1;
//
//        for (auto itr:mp) {
//            if (itr.second == n - 1) {
//                flag = 1;
//            }
//        }
//
////    for (auto itr:mp) {
////        cout << itr.first << " " << itr.second;
////    }
////    cout << '\n';
//
//        return flag;
//    }
//
//    //Function to find if there is a celebrity in the party or not.
//    int celebrity(vector<vector<int> > &M, int n) {
//        // code here
//        return solve(M,n);
//    }
//};
//
//// { Driver Code Starts.
//
//int main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        vector<vector<int> > M(n, vector<int>(n, 0));
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                cin >> M[i][j];
//            }
//        }
//        Solution ob;
//        cout << ob.celebrity(M, n) << endl;
//
//    }
//}
//// } Driver Code Ends