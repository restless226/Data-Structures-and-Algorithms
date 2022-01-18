#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <iomanip>

#define ll long long
using std::vector;
using namespace std;

double precisionCompute(ll int x, ll int y) {

    ll int n = 4;
    // Integral division
    ll int d = x / y;

    string str;
    // Now one by print digits after dot
    // using school division method.
    for (int i = 0; i <= n; i++) {
        str += to_string(d);
        x = x - (y * d);
        if (x == 0)
            break;
        x = x * 10;
        d = x / y;
        if (i == 0)
            str += ".";
    }
    return std::stod(str);
}

double get_optimal_value(ll int capacity, vector<ll int> weights, vector<ll int> values) {
    double value = 0.0;

    // write your code here
    ll int total_weights = 0;
    ll int total_values = 0;

    auto itr4 = values.begin();
    while (itr4 != values.end()) {
        total_values += *itr4;
        itr4++;
    }

    auto itr3 = weights.begin();
    while (itr3 != weights.end()) {
        total_weights += *itr3;
        itr3++;
    }

    if (total_weights <= capacity) {
        return precisionCompute(total_values, 1);
    }

    vector<int> value_by_weight;

    auto itr1 = weights.begin();
    auto itr2 = values.begin();

    while (itr1 != weights.end()) {
        value_by_weight.push_back(((*itr2) / (*itr1)));
        itr1++;
        itr2++;
    }

    while (true) {

        if (capacity <= 0) {
            break;
        }

        ll int maxElementIndex
                = std::max_element(value_by_weight.begin(), value_by_weight.end()) - value_by_weight.begin();

        ll int a = std::min(capacity, weights.at(maxElementIndex));
        value += ((double) a) * precisionCompute(values.at(maxElementIndex), weights.at(maxElementIndex));
        capacity -= a;
        value_by_weight.erase(value_by_weight.begin() + maxElementIndex);
    }
    return value;
}

int main() {
    ll int n;
    ll int capacity;
    std::cin >> n >> capacity;
    vector<ll int> values(n);
    vector<ll int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    std::cout.precision(10);
    std::cout << optimal_value << std::endl;
    return 0;
}

#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <sstream>

#define ll long long
using namespace std;


int main() {
    int n, SizeOfKnapSack;
    cin >> n >> SizeOfKnapSack;
    vector<pair<int, int>> Value_Wigth(n);
    vector<pair<double, int>> ValuePerUnit(n);
    for (int i = 0; i < n; i++) {
        cin >> Value_Wigth[i].first >> Value_Wigth[i].second;
        ValuePerUnit[i].first = 1.0 * Value_Wigth[i].first / Value_Wigth[i].second;
        ValuePerUnit[i].second = Value_Wigth[i].second;
    }
    sort(ValuePerUnit.begin(), ValuePerUnit.end(), greater<pair<double, int>>());
    double Res = 0;
    for (int i = 0; i < ValuePerUnit.size() && SizeOfKnapSack > 0; i++) {
        Res += min(ValuePerUnit[i].second, SizeOfKnapSack) * ValuePerUnit[i].first;
        SizeOfKnapSack -= min(ValuePerUnit[i].second, SizeOfKnapSack);
    }
    cout << fixed << setprecision(4) << Res << endl;
}
