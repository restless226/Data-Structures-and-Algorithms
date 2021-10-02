///*
//PROBLEM STATEMENT:
//There is one meeting room in a firm.
//There are N meetings in the form of (start[i], end[i])
//where start[i] is start time of meeting i and end[i] is finish time of meeting i.
//What is the maximum number of meetings that can be accommodated in the meeting room
//when only one meeting can be held in the meeting room at a particular time?
//NOTE: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//struct Meeting {
//    int start;
//    int end;
//};
//
//void printArray(Meeting meeting[], int n) {
//    cout << "start : ";
//    for (int i = 0; i < n; i++) {
//        cout << meeting[i].start << " ";
//    }
//    cout << '\n';
//
//    cout << "end :   ";
//    for (int i = 0; i < n; i++) {
//        cout << meeting[i].end << " ";
//    }
//    cout << '\n';
//}
//
//bool cmp(Meeting meeting1, Meeting meeting2) {
//    return (meeting1.end < meeting2.end) ? true : false;
//}
//
//int solve(Meeting meeting[], int n) {
//    cout << "\nMEETINGS ARRAY BEFORE...\n";
//    printArray(meeting, n);
//    sort(meeting, meeting + n, cmp);
//    cout << "\nMEETINGS ARRAY AFTER...\n";
//    printArray(meeting, n);
//
//    int time = meeting[0].end;
//    int count = 1;
//    for (int i = 1; i < n; i++) {
//        if (meeting[i].start > time) {
//            count++;
//            time = meeting[i].end;
//        }
//    }
//    return count;
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        Meeting meeting[n];
//        for (int i = 0; i < n; i++) {
//            cin >> meeting[i].start;
//        }
//        for (int i = 0; i < n; i++) {
//            cin >> meeting[i].end;
//        }
//        int ans = solve(meeting, n);
//        cout << "maximum number of meetings is : " << ans;
//    }
//    return 0;
//}
//
///*
//INPUT:
//2
//6
//1 3 0 5 8 5
//2 4 6 7 9 9
//3
//10 12 20
//20 25 30
//
//OUTPUT:
//MEETINGS ARRAY BEFORE...
//start : 1 3 0 5 8 5
//end :   2 4 6 7 9 9
//
//MEETINGS ARRAY AFTER...
//start : 1 3 0 5 8 5
//end :   2 4 6 7 9 9
//maximum number of meetings is : 4
//MEETINGS ARRAY BEFORE...
//start : 10 12 20
//end :   20 25 30
//
//MEETINGS ARRAY AFTER...
//start : 10 12 20
//end :   20 25 30
//maximum number of meetings is : 1
//*/