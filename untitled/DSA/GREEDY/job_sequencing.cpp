/*
PROBLEM STATEMENT:
Given a set of N jobs where each jobi has a deadline and profit associated with it.
Each job takes 1 unit of time to complete and only one job can be scheduled at a time.
We earn the profit if and only if the job is completed by its deadline.
The task is to find the number of jobs done and the maximum profit.
NOTE: Jobs will be given in the form (Jobid, Deadline, Profit) associated with that Job.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

struct Job {
    int id;
    int deadline;
    int profit;
};

void printArray(Job job[], int n) {
    cout << "id :       ";
    for (int i = 0; i < n; i++) {
        cout << job[i].id << " ";
    }
    cout << '\n';

    cout << "deadline : ";
    for (int i = 0; i < n; i++) {
        cout << job[i].deadline << " ";
    }
    cout << '\n';

    cout << "profit :   ";
    for (int i = 0; i < n; i++) {
        cout << job[i].profit << " ";
    }
    cout << '\n';
}

bool cmp(Job job1, Job job2) {
    return (job1.profit > job2.profit) ? true : false;
}

void solve(Job job[], int n, vector<int> &ans) {
    int time = 0;
    for (int i = 0; i < n; i++) {
        time = max(time, job[i].deadline);
    }

    cout << "\nITEM ARRAY BEFORE...\n";
    printArray(job, n);
    sort(job, job + n, cmp);
    cout << "\nITEM ARRAY AFTER...\n";
    printArray(job, n);

    int slots[time + 1];
    memset(slots, -1, sizeof(slots));

    int count = 0;
    int max_profit = 0;
    for (int i = 0; i < n; i++) {
        if (count < time) {
            for (int j = job[i].deadline; j >= 1; j--) {
                if (slots[j] == -1) {
                    slots[j] = job[i].id;
                    max_profit += job[i].profit;
                    count++;
                    break;
                }
            }
        } else {
            break;
        }
    }

    cout << "\nSLOTS ARRAY...\n";
    for (int i = 0; i < time + 1; i++) {
        cout << slots[i] << " ";
    }
    cout << '\n';

    ans.push_back(count);
    ans.push_back(max_profit);
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
        Job job[n];
        for (int i = 0; i < n; i++) {
            cin >> job[i].id >> job[i].deadline >> job[i].profit;
        }
        vector<int> ans;
        solve(job, n, ans);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}

/*
INPUT:
5
4
1 4 20
2 1 10
3 1 40
4 1 30
5
1 2 100
2 1 19
3 2 27
4 1 25
5 1 15
5
1 2 20
2 2 15
3 1 10
4 3 5
5 3 1
17
1 56 288
2 27 435
3 67 401
4 64 368
5 94 248
6 54 361
7 43 108
8 96 167
9 73 251
10 96 170
11 14 156
12 78 184
13 61 370
14 77 424
15 68 397
16 40 375
17 36 218
7
1 3 35
2 4 30
3 4 25
4 2 20
5 3 15
6 1 12
7 2 5


OUTPUT:
ITEM ARRAY BEFORE...
id :       1 2 3 4
deadline : 4 1 1 1
profit :   20 10 40 30

ITEM ARRAY AFTER...
id :       3 4 1 2
deadline : 1 1 4 1
profit :   40 30 20 10

SLOTS ARRAY...
-1 3 -1 -1 1
2 60

ITEM ARRAY BEFORE...
id :       1 2 3 4 5
deadline : 2 1 2 1 1
profit :   100 19 27 25 15

ITEM ARRAY AFTER...
id :       1 3 4 2 5
deadline : 2 2 1 1 1
profit :   100 27 25 19 15

SLOTS ARRAY...
-1 3 1
2 127

ITEM ARRAY BEFORE...
id :       1 2 3 4 5
deadline : 2 2 1 3 3
profit :   20 15 10 5 1

ITEM ARRAY AFTER...
id :       1 2 3 4 5
deadline : 2 2 1 3 3
profit :   20 15 10 5 1

SLOTS ARRAY...
-1 2 1 4
3 40

ITEM ARRAY BEFORE...
id :       1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
deadline : 56 27 67 64 94 54 43 96 73 96 14 78 61 77 68 40 36
profit :   288 435 401 368 248 361 108 167 251 170 156 184 370 424 397 375 218

ITEM ARRAY AFTER...
id :       2 14 3 15 16 13 4 6 1 9 5 17 12 10 8 11 7
deadline : 27 77 67 68 40 61 64 54 56 73 94 36 78 96 96 14 43
profit :   435 424 401 397 375 370 368 361 288 251 248 218 184 170 167 156 108

SLOTS ARRAY...
-1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 11 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 2 -1 -1 -1 -1 -1 -1 -1 -1 17 -1 -1 -1 16 -1 -1 7 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 6 -1 1 -1 -1 -1 -1 13 -1 -1 4 -1 -1 3 15 -1 -1 -1 -1 9 -1 -1 -1 14 12 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 5 8 10
17 4921


ITEM ARRAY BEFORE...
id :       1 2 3 4 5 6 7
deadline : 3 4 4 2 3 1 2
profit :   35 30 25 20 15 12 5

ITEM ARRAY AFTER...
id :       1 2 3 4 5 6 7
deadline : 3 4 4 2 3 1 2
profit :   35 30 25 20 15 12 5

SLOTS ARRAY...
-1 4 3 1 2
4 110
*/