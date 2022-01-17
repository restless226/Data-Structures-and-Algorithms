/*
Rain Water Trapping (RWT)
PROBLEM STATEMENT:
Given an array arr[] of N non-negative integers representing the height of blocks.
If width of each block is 1,
compute how much water can be trapped between the blocks during the rainy season.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

vector<int> maxL(vector<int> &arr, int n) {
    vector<int> v;
    stack<int> s;
    s.push(arr[0]);
    v.push_back(arr[0]);

    for (int i = 1; i < n; i++) {
        if (s.top() >= arr[i]) {
            v.push_back(s.top());
        } else {
            s.pop();
            s.push(arr[i]);
            v.push_back(arr[i]);
        }

    }

    return v;
}

vector<int> maxR(vector<int> &arr, int n) {
    vector<int> v;
    stack<int> s;
    s.push(arr[n - 1]);
    v.push_back(arr[n - 1]);

    for (int i = n - 2; i >= 0; i--) {
        if (s.top() >= arr[i]) {
            v.push_back(s.top());
        } else {
            s.pop();
            s.push(arr[i]);
            v.push_back(arr[i]);
        }
    }

    reverse(v.begin(), v.end());
    return v;
}


int rwt(vector<int> arr, int n) {
    vector<int> left = maxL(arr, n);
    vector<int> right = maxR(arr, n);

//    cout << "\nleft VECTOR...\n";
//    for (auto itr:left) {
//        cout << itr << " ";
//    }
//    cout << '\n';
//
//    cout << "\nright VECTOR...\n";
//    for (auto itr:right) {
//        cout << itr << " ";
//    }
//    cout << '\n';

    int water[n];
    water[0] = 0;
    water[n - 1] = 0;

    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        water[i] = (min(left[i], right[i]) - arr[i]) * 1;   // width of each block is 1
        ans += water[i];
    }

//    cout << "\nwater ARRAY...\n";
//    for (int i = 0; i < n; i++) {
//        cout << water[i] << " ";
//    }
//    cout << '\n';

    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int t;
    cin >> t;
    int n;
    while (t--) {
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "\ntotal amount of water that can be trapped is : " << rwt(arr, n);
    }

    return 0;
}

/*
OUTPUT:
1
6
3 0 0 2 0 4

total amount of water that can be trapped is :
left VECTOR...
3 3 3 3 3 4

right VECTOR...
4 4 4 4 4 4

water ARRAY...
0 3 3 1 3 0
10



3
6
3 0 0 2 0 4
4
7 4 0 9
3
6 9 9

total amount of water that can be trapped is : 10
total amount of water that can be trapped is : 10
total amount of water that can be trapped is : 0
*/