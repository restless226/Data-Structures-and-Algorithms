//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<string> split_string(string);
//
//void theHackathon(int n, int m, int a, int b, int f, int s, int t,
//                  vector<pair<string, int>> &employee, vector<pair<string, string>> &request) {
//    // Participant code here
//
//    set<vector<string>> set;
//
//
//}
//
//int main() {
//    string inputdata_temp;
//    getline(cin, inputdata_temp);
//
//    vector<string> inputdata = split_string(inputdata_temp);
//
//    int n = stoi(inputdata[0]);
//
//    int m = stoi(inputdata[1]);
//
//    int a = stoi(inputdata[2]);
//
//    int b = stoi(inputdata[3]);
//
//    int f = stoi(inputdata[4]);
//
//    int s = stoi(inputdata[5]);
//
//    int t = stoi(inputdata[6]);
//
//
//    vector<pair<string, int>> employee;
//    vector<pair<string, string>> request;
//    string name;
//    int dept;
//    for (int i = 0; i < n; i++) {
//        cin >> name >> dept;
//        employee.emplace_back(name, dept);
//    }
//    string x, y;
//    for (int i = 0; i < m; i++) {
//        cin >> x >> y;
//        request.emplace_back(x, y);
//    }
//
//    theHackathon(n, m, a, b, f, s, t, employee, request);
//
//    return 0;
//}
//
//vector<string> split_string(string input_string) {
//    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
//        return x == y and x == ' ';
//    });
//
//    input_string.erase(new_end, input_string.end());
//
//    while (input_string[input_string.length() - 1] == ' ') {
//        input_string.pop_back();
//    }
//
//    vector<string> splits;
//    char delimiter = ' ';
//
//    size_t i = 0;
//    size_t pos = input_string.find(delimiter);
//
//    while (pos != string::npos) {
//        splits.push_back(input_string.substr(i, pos - i));
//
//        i = pos + 1;
//        pos = input_string.find(delimiter, i);
//    }
//
//    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));
//
//    return splits;
//}