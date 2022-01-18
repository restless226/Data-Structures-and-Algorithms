#include <iostream>
#include <vector>

#define ll long long
using std::cin;
using std::cout;
using std::vector;
using std::max;
using namespace std;

ll int compute_min_refills(ll int dist, ll int tank, vector<ll int> &stops) {
    // write your code here

    if (dist > tank + stops.back()) {
        return -1;
    }
    for (auto itr = stops.begin(); itr != stops.end() - 1; itr++) {
        if (*(itr + 1) - *itr > tank) {
            return -1;
        }
    }

    ll int refills = 0;
    ll int dist_covered = 0;

    for (auto itr = stops.begin(); itr != stops.end(); itr++) {
        if (*itr > tank) {
            dist_covered += *(itr - 1);
            refills++;
        } else if (dist_covered >= dist) {
            break;
        }
    }
    return refills;
}


int main() {
    ll int d = 0;
    cin >> d;
    ll int m = 0;
    cin >> m;
    ll int n = 0;
    cin >> n;

    vector<ll int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}


#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::max;
using std::vector;

int compute_min_refills(int dist, int tank, vector<int> &stops, int count = 0) {
    // write your code here
    int rCount = 0;
    int refillPos = -2;
    int i = 0;
    int currLocation = 0;
    stops.push_back(dist);
    while (true) {
        if (tank + currLocation >= dist) {
            return rCount;
        }
        if (tank < stops[i] - currLocation) {
            refillPos = i - 1;
            if (currLocation == stops[refillPos]) {
                return -1;
            }
            rCount++;
            currLocation = stops[i - 1];
            i -= 1;
            continue;
        }
        i++;
    }
    return -1;
}

int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
