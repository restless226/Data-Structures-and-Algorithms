/*
PROBLEM STATEMENT:
Write a program to Validate an IPv4 Address.
According to Wikipedia, IPv4 addresses are canonically represented in dot-decimal notation,
which consists of four decimal numbers, each ranging from 0 to 255, separated by dots,
Here we are considering numbers only from 0 to 255 and any additional leading zeroes will be considered invalid.
Your task is  to complete the function solve() which returns 1 if the ip address is valid else returns 0.
The function takes a string s as its only argument .
*/

#include <bits/stdc++.h>

#define int long long
using namespace std;
const int mod = 1000000007;

int solve(string &s) {
    int count = 0, dots = 0;
    string ip;
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) return 0;
        if (s[i] == '.') dots++;
    }
    if (dots != 3) return 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            if (ip[0] == '0' && ip.length() > 1) return 0;
            if (ip.size() > 3 || ip.empty() || stoi(ip) < 0 || stoi(ip) > 255) return 0;
            else ip.clear();
            count++;
        } else {
            ip += s[i];
        }
    }
    if (ip[0] == '0' && ip.length() > 1) return 0;
    if (ip.size() > 3 || ip.empty() || stoi(ip) < 0 || stoi(ip) > 255) return 0;
    count++;
    return (count == 4) ? 1 : 0;
}

int32_t main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << '\n';
    }
    return 0;
}

/*
INPUT:
9
67.53.56.29
0000.0000.0000.0000
172.16.254.01
1...1
172.16.254.1
222.111.111.111
5555..555
000.00.00.00
a.b.c.d

OUTPUT:
1
0
0
0
1
1
0
0
0
*/