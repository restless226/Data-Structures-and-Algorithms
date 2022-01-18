#include <iostream>

using namespace std;
#define ll long long

ll get_change(ll m) {
    //write your code here
    ll count = 0;
    while (true) {
        if (m == 0) {
            break;
        } else if (m >= 10) {
            m -= 10;
            count++;
        } else if (m >= 5) {
            m -= 5;
            count++;
        } else {
            m -= 1;
            count++;
        }
    }
    return count;
}

int main() {
    ll m;
    std::cin >> m;
    std::cout << get_change(m) << '\n';
}
