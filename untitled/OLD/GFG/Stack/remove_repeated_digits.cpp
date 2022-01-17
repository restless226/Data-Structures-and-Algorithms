#include <iostream>
#include <stack>

using namespace std;

int main() {
    //code
    long long int T, N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> N;

        stack<long long int> s1;

        int z = N % 10;
        s1.push(z);
        N = N / 10;
        while (N > 0) {
            int x = N % 10;
            if (s1.top() != x) {
                s1.push(x);
            }
            N = N / 10;
        }

        while (!s1.empty()) {
            cout << s1.top();
            s1.pop();
        }

        cout << endl;

    }
    return 0;
}