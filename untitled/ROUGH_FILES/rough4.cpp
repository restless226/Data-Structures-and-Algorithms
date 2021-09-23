//// { Driver Code Starts
//#include<bits/stdc++.h>
//
//using namespace std;
//
//struct Box {
//    int height;
//    int width;
//    int length;
//};
//
//bool cmp(struct Box b1, struct Box b2) {
//    if (b1.length > b2.length && b1.width > b2.width) {
//        return true;
//    }
//    return false;
//}
//
//// } Driver Code Ends
//class Solution {
//    void printBox(struct Box box[], int n) {
//        cout << "\nheight   " << "width     " << "length\n";
//        for (int i = 0; i < n; ++i) {
//            cout << box[i].height << "          " << box[i].width << "          " << box[i].length << '\n';
//        }
//        cout << '\n';
//    }
//
//    int solve(struct Box box[], int n) {
//        int dp[n];
//
//        for (int i = 0; i < n; i++) {
//            dp[i] = box[i].height;
//        }
//
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < i; j++) {
//                if (box[i].length < box[j].length
//                    && box[i].width < box[j].width
//                    && dp[i] < dp[j] + box[i].height) {
//                    dp[i] = dp[j] + box[i].height;
//                }
//            }
//        }
//
//        int ans = 0;
//        for (int i = 0; i < n; i++) {
//            ans = max(ans, dp[i]);
//        }
//        return ans;
//    }
//
//public:
//    /*The function takes an array of heights, width and
//    length as its 3 arguments where each index i value
//    determines the height, width, length of the ith box.
//    Here n is the total no of boxes.*/
//    int maxHeight(int height[], int width[], int length[], int n) {
//        //Your code here
//        struct Box box[3 * n];
//
//        // height
//        for (int i = 0; i < n; i++) {
//            box[i].height = height[i];
//        }
//        for (int i = 0; i < n; i++) {
//            box[i].width = width[i];
//        }
//        for (int i = 0; i < n; i++) {
//            box[i].length = length[i];
//        }
//
////        cout << "\nSORTED BOX ARRAY BEFORE...\n";
////        printBox(box, n);
//
//        // width
//        for (int i = n; i < 2 * n; i++) {
//            box[i].height = box[i - n].width;
//            box[i].width = box[i - n].length;
//            box[i].length = box[i - n].height;
//        }
//
//        // length
//        for (int i = 2 * n; i < 3 * n; i++) {
//            box[i].width = box[i - n].length;
//            box[i].length = box[i - n].height;
//            box[i].height = box[i - n].width;
//        }
//
//        sort(box, box + 3 * n, cmp);
//
////        cout << "\nSORTED BOX ARRAY AFTER...\n";
////        printBox(box, 3 * n);
//
//        return solve(box, 3 * n);
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
//
//
//        int A[105], B[105], C[105];
//        for (int i = 0; i < n; i++)cin >> A[i];
//        for (int j = 0; j < n; j++)cin >> B[j];
//        for (int k = 0; k < n; k++)cin >> C[k];
//        Solution ob;
//        cout << ob.maxHeight(A, B, C, n) << endl;
//    }
//
//    return 0;
//}
//// } Driver Code Ends