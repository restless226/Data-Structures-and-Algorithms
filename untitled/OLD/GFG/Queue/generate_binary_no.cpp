//// { Driver Code Starts
//#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//
//
//// } Driver Code Ends
//
//
//// Function to print all binary numbers upto n
//
//vector<string> generate(ll n)
//{
//    // Your code here
//    vector<string> v;
//    ll int binaryNum[32];
//
//    auto p=v.begin();
//    for(ll int x=1;x<n;x++) {
//        int i = 0;
//        while (x > 0) {
//            binaryNum[i] = x % 2;
//            x = x / 2;
//            i++;
//        }
//
//        string s = "";
//        for (int j = i - 1; j >= 0; j--) {
//            s += std::to_string(binaryNum[j]);
//        }
//        v.insert(p,s);
//        p++;
//    }
//    return v;
//
//}
//
//
//// { Driver Code Starts.
//
//int main()
//{
//    int t;
//    cin>>t;
//    while(t--)
//    {
//        ll n;
//        cin>>n;
//        vector<string> ans = generate(n);
//        for(auto it:ans) cout<<it<<" ";
//        cout<<endl;
//    }
//    return 0;
//}  // } Driver Code Ends