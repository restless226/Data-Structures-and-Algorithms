//// { Driver Code Starts
////Initial template for C++
//
//#include <bits/stdc++.h>
//using namespace std;
//
//// } Driver Code Ends
//
//
////User function template for C++
//
//class Solution{
//public:
//    int maxDays(int arr[],int n){
//        // code here
//        int days=0;
//        int max;
//        for(int i=0;i<n;i++){
//            max=*max_element(arr,arr+n);
//            if(max!=0){
//                arr[i]=-1;
//                days++;
//            }
//        }
//        return days;
//    }
//};
//
//// { Driver Code Starts.
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--)
//    {
//        int n;
//        cin>>n;
//        int arr[n];
//        for(int i=0;i<n;i++)
//            cin>>arr[i];
//        Solution ob;
//        cout << ob.maxDays(arr, n) << "\n";
//    }
//    return 0;
//}  // } Driver Code Ends