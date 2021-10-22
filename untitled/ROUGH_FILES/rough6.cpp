//class Solution {
//public:
//    vector<int> printKClosest(vector<int> arr, int n, int k, int x) {
//        // code here
//        priority_queue <pair<int, int>> pq;
//
//        for (int i = 0; i < n; i++) {
//            if (pq.size() < k and arr[i] != x) {
//                pq.push(make_pair(abs(arr[i] - x), i));
//            } else {
//                if (abs(arr[i] - x) <= pq.top().first and arr[i] != x) {
//                    pq.pop();
//                    pq.push(make_pair(abs(arr[i] - x), i));
//                }
//            }
//        }
//        vector<int> ans;
//
//        while (!pq.empty()) {
//            // cout <<pq.top().second<<endl;
//            ans.insert(ans.begin(), arr[pq.top().second]);
//            pq.pop();
//        }
//        return ans;
//    }
//};