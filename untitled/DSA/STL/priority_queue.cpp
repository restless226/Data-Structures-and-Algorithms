/*
 * TOPIC - "PRIORITY QUEUE"
 * It is a 'container adapter' that provides constant time look-up
   for largest or smallest element.
 * By default std::vector is the container used inside
 * Internally this 'vector' is converted into 'Heap'
 * Cost of insertion and extraction is logarithmic O(log n)
 * std::priority_queue is implemented using std:make_heap,std:push_heap,std:pop_heap functions
 * we can largest or smallest element from priority QUEUE in O(1) time
*/

#include <iostream>
#include <QUEUE>

using namespace std;

template<typename T>
void print_q(T q) {
    while (!q.empty()) {
        cout << q.top() << " ";
        q.pop();
    }
    cout << "\n";
};

int main() {


    int a[10] = {1, 8, 5, 6, 3, 4, 0, 9, 7, 2};

    {
        priority_queue<int> q;

        for (int i = 0; i < 10; i++) {
            q.push(a[i]);
        }

        print_q(q);
    }


    {
        // Using <greater> comparator
        priority_queue<int, vector<int>, greater<int>> q2;

        for (int i = 0; i < 10; i++) {
            q2.push(a[i]);
        }
        print_q(q2);
    }


    {
        // Using lambda(custom comparator) to compare elements
        auto cmp = [](int left, int right) {
            return left < right;
        };

        priority_queue<int, vector<int>, decltype(cmp)> q3(cmp);

        for (int i = 0; i < 10; i++) {
            q3.push(a[i]);
        }
        print_q(q3);
    }

    return 0;
}