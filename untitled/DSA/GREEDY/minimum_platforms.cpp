/*
PROBLEM STATEMENT:
Given arrival and departure times of all trains that reach a railway station.
Find the minimum number of platforms required for the railway station so that no train is kept waiting.
Consider that all the trains arrive on the same day and leave on the same day.
Arrival and departure time can never be the same for a train
but we can have arrival time of one train equal to departure time of the other.
At any given instance of time, same platform can not be used for both departure of a train
and arrival of another train. In such cases, we need different platforms.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;


void printArray(int arrival[], int departure[], int n) {
    cout << "arrival :   ";
    for (int i = 0; i < n; i++) {
        cout << arrival[i] << " ";
    }
    cout << '\n';

    cout << "departure : ";
    for (int i = 0; i < n; i++) {
        cout << departure[i] << " ";
    }
    cout << '\n';
}

// Time Complexity -> O(2nlogn) + O(2n) = O(nlogn)
// Space Complexity -> O(1)
int solve(int arrival[], int departure[], int n) {
    cout << "\nARRAYS BEFORE...\n";
    printArray(arrival, departure, n);

    sort(arrival, arrival + n);
    sort(departure, departure + n);

    cout << "\nARRAYS AFTER...\n";
    printArray(arrival, departure, n);

    int i = 1;
    int j = 0;
    int need = 1;
    int ans = 1;

    while (i < n && j < n) {
        if(arrival[i]<=departure[j]){
            need++;
            i++;
        }else if(arrival[i]>departure[j]){
            need--;
            j++;
        }
        ans=max(ans,need);
    }
    return ans;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arrival[n];
        int departure[n];
        for (int i = 0; i < n; i++) {
            cin >> arrival[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> departure[i];
        }
        int ans = solve(arrival, departure, n);
        cout << "minimum no of platforms required : " << ans << '\n';
    }
    return 0;
}

/*
INPUT:
3
6
0900 0940 0950 1100 1500 1800
0910 1200 1120 1130 1900 2000
3
0900 1100 1235
1000 1200 1240
6
50 120 200 550 700 850
500 550 600 700 900 1000

OUTPUT:
ARRAYS BEFORE...
arrival :   900 940 950 1100 1500 1800
departure : 910 1200 1120 1130 1900 2000

ARRAYS AFTER...
arrival :   900 940 950 1100 1500 1800
departure : 910 1120 1130 1200 1900 2000
minimum no of platforms required : 3

ARRAYS BEFORE...
arrival :   900 1100 1235
departure : 1000 1200 1240

ARRAYS AFTER...
arrival :   900 1100 1235
departure : 1000 1200 1240
minimum no of platforms required : 1

ARRAYS BEFORE...
arrival :   50 120 200 550 700 850
departure : 500 550 600 700 900 1000

ARRAYS AFTER...
arrival :   50 120 200 550 700 850
departure : 500 550 600 700 900 1000
minimum no of platforms required : 3
*/