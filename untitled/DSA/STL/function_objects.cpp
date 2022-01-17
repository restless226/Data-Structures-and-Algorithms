// function wrapped in a class is available as an object
// also called as 'functor'

#include <iostream>
#include <functional>
#include <algorithm>

using namespace std;

int main() {
    int arr[] = {1111, 333, 4444, 12, 55, 177};

    sort(arr, arr + 6);

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    sort(arr, arr + 6, greater<int>());

    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
