///*
//PROBLEM STATEMENT:
//Given a stack, the task is to sort it such that the top of the stack has the greatest element.
//*/
//
//#include<bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//class SortedStack {
//public:
//    stack<int> s;
//
//    void sort();
//
//    void insert(int element);
//};
//
//void SortedStack::insert(int element) {
//    if (s.empty() || s.top() <= element) {
//        s.push(element);
//    } else {
//        int temp = s.top();
//        s.pop();
//        insert(element);
//        s.push(temp);
//    }
//}
//
//void SortedStack::sort() {
//    if (s.size() > 1) {
//        int element = s.top();
//        s.pop();
//        sort();
//        insert(element);
//    }
//}
//
//void printStack(stack<int> s) {
//    while (!s.empty()) {
//        printf("%d ", s.top());
//        s.pop();
//    }
//    printf("\n");
//}
//
//int32_t main() {
//    int t;
//    cin >> t;
//    while (t--) {
//        SortedStack *ss = new SortedStack();
//        int n;
//        cin >> n;
//        for (int i = 0; i < n; i++) {
//            int k;
//            cin >> k;
//            ss->s.push(k);
//        }
//        ss->sort();
//        printStack(ss->s);
//    }
//}
///*
//INPUT:
//3
//4
//1 2 3 4
//5
//1 2 3 4 5
//5
//5 2 4 1 3
//
//OUTPUT:
//4 3 2 1
//5 4 3 2 1
//5 4 3 2 1
//*/