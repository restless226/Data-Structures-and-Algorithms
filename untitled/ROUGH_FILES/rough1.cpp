//#include <bits/stdc++.h>
//
//using namespace std;
//
///*******  All Required define Pre-Processors and typedef Constants *******/
//#define ll long long
//#define pi 3.1415926535897932384626433832795
//#define mod 1000000007
//
//typedef pair<ll int, ll int> pll;
//typedef pair<vector<ll int>, vector<ll int>> pvv;
//typedef vector<ll int> vl;
//typedef vector<string> vs;
//typedef vector<pll> vpll;
//typedef vector<vl> vvl;
//typedef map<ll int, ll int> mpll;
//typedef set<ll int> setl;
//typedef multiset<ll int> msetl;
//
///************************************************************************/
//
//
//
//
//ll int findGCD(ll int a,ll int b)
//{
//    // Everything divides 0
//    if (a == 0)
//        return b;
//    if (b == 0)
//        return a;
//
//    // base case
//    if (a == b)
//        return a;
//
//    // a is greater
//    if (a > b)
//        return findGCD(a-b, b);
//    return findGCD(a, b-a);
//}
//
//
//int main() {
//
//    cin.tie(NULL);
//    cout.tie(NULL);
//    ios_base::sync_with_stdio(false);
//
//
//    ll int t;
//    cin >> t;
//
//    ll int n,q;
//
//    while (t--) {
//        cin>>n>>q;
//
//        ll int a[n];
//
//        for (ll int i = 0; i < n; ++i) {
//            cin>>a[i];
//        }
//
//        ll int ql[q];
//        ll int qr[q];
//
//        ll int l,r;
//        ll int gcd;
//
//
//        ll int count=q;
//
//        while (q--){
//            cin>>ql[q]>>qr[q];
//        }
//
//        ll int gcd1=a[ql[count]-2];
//        ll int gcd2;
//        while (count--){
//            for(int i=0;i<ql[count]-1;i++){
//
//            }
//        }
//
//
//    }
//
//    return 0;
//}
