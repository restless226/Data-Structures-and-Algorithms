//typedef std::pair<double, double> my_pair;
//
//class comparator {
//public:
//    int operator()(my_pair &p1, my_pair &p2) {
//        if (p1.first < p2.first)
//            return true;
//        else if (p1.first > p2.first)
//            return false;
//        else {
//            if (p1.second > p2.second)
//                return true;
//            else
//                return false;
//        }
//    }
//};
//
//
//class Solution {
//public:
//    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
//        // code here
//        priority_queue <my_pair, vector<my_pair>, comparator> maxh;
//
//        vector<int> res;
//        int check = binary_search(arr.begin(), arr.end(), x);
//        int min_size;
//        if (check) {
//            min_size = 1;
//            k = k + 1;
//        } else
//            min_size = 0;
//
//        int i = 0;
//        while (i < k) {
//            maxh.push({abs(arr[i] - x), i});
//            i++;
//        }
//        while (i < n) {
//            maxh.push({abs(arr[i] - x), i});
//            maxh.pop();
//            i++;
//
//        }
//
//        while (maxh.size() > min_size) {
//            int ind = maxh.top().second;
//
//            res.push_back(arr[ind]);
//            maxh.pop();
//        }
//
//
//        reverse(res.begin(), res.end());
//
//        return res;
//    }
//};