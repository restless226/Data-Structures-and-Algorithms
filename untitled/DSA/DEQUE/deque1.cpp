/*
double ended QUEUE sliding window problem to print largest element in given window
*/


#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    int a[100000];
    int k;

    cout << "Enter n:" << endl;
    cin >> n;
    cout << "Enter k:" << endl;
    cin >> k;

    cout << "Enter elements of array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }


    deque<int> deque(k);

    // processing first k elements if array
    for (int i = 0; i < k; ++i) {
        while (!deque.empty() && a[i] > a[deque.back()]) {
            deque.pop_back();
        }
        deque.push_back(i);
    }

    // process remaining elements
    for (int i = k; i < n; i++) {
        cout << a[deque.front()] << " ";

        // 1. remove elements which are not part of the window (contraction)
        while (!deque.empty() && deque.front() <= i - k) {
            deque.pop_front();
        }

        // 2. remove elements which are not useful and are in window (contraction)
        while (!deque.empty() && a[i] > a[deque.back()]) {
            deque.pop_back();
        }

        // 3. add new elements (expansion)
        deque.push_back(i);
    }

    cout << a[deque.back()] << endl;
    return 0;
}


/*
OUTPUT:

Enter n:
9

Enter k:
3

Enter elements of array:
1 2 3 1 4 5 2 3 6
3 3 4 5 5 5 6
*/