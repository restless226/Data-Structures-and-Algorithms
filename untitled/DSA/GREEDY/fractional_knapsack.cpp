/*
PROBLEM STATEMENT:
Given weights and values of N items, we need to put these items in a knapsack of capacity W
to get the maximum total value in the knapsack.
NOTE: Unlike 0/1 knapsack, you are allowed to break the item.
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;

struct Item {
    int value;
    int weight;
};

bool cmp(Item item1, Item item2) {
    return ((double) item1.value / item1.weight) > ((double) item2.value / item2.weight) ? true : false;
}

void printArray(Item item[], int n) {
    cout << "values : ";
    for (int i = 0; i < n; i++) {
        cout << item[i].value << " ";
    }
    cout << '\n';
    cout << "weights : ";
    for (int i = 0; i < n; i++) {
        cout << item[i].weight << " ";
    }
    cout << '\n';
}

double solve(int W, Item item[], int n) {
    cout << "\nITEM ARRAY BEFORE...\n";
    printArray(item, n);
    sort(item, item + n, cmp);
    cout << "\nITEM ARRAY AFTER...\n";
    printArray(item, n);

    int total_weights = 0;
    int total_values = 0;
    double max_profit = 0;

    for (int i = 0; i < n; i++) {
        total_weights += item[i].weight;
        total_values += item[i].value;
    }

    if (W >= total_weights) {
        return (double) total_values;
    }

    for (int i = 0; i < n; i++) {
        if (item[i].weight <= W) {
            W -= item[i].weight;
            max_profit += (double) item[i].value;
        } else {
            max_profit += item[i].value * ((double) W / item[i].weight);
            break;
        }
    }
    return max_profit;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    cout << setprecision(2) << fixed;
    while (t--) {
        int n, W;
        cin >> n >> W;
        Item item[n];
        for (int i = 0; i < n; i++) {
            cin >> item[i].value >> item[i].weight;
        }
        double max_profit = solve(W, item, n);
        cout << "\nmaximum profit is : " << max_profit << '\n';
    }
    return 0;
}

/*
INPUT:
2
7
15
10 2
5 3
15 5
7 7
6 1
18 4
3 1
3
50
60 10
100 20
120 30

OUTPUT:
ITEM ARRAY BEFORE...
values : 10 5 15 7 6 18 3
weights : 2 3 5 7 1 4 1

ITEM ARRAY AFTER...
values : 6 10 18 15 3 5 7
weights : 1 2 4 5 1 3 7

maximum profit is : 55.33

ITEM ARRAY BEFORE...
values : 60 100 120
weights : 10 20 30

ITEM ARRAY AFTER...
values : 60 100 120
weights : 10 20 30

maximum profit is : 240.00
*/