#include <iostream>

using namespace std;


// to remove char 'x' from string
void removeX(char s[]) {
    // base case (if we r4each null character i.e. end of th string)
    if (s[0] == '\0') {
        return;
    }

    //
    if (s[0] != 'x') {
        removeX(s + 1);
    } else {
        int i;
        for (i = 1; s[i] != '\0'; i++) {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];    // copying null character

        removeX(s); // if 'x' is occurring successively
    }
}


int find_length(char s[]) {
    // base case
    if (s[0] == '\0') {     // null char condition
        return 0;
    }

    // small calculation
    int smallStringLength = find_length(s + 1);
    return smallStringLength + 1;
}

int main() {


    char str[100];

    cout << "Enter string:" << '\n';
    cin >> str;

    cout << find_length(str) << '\n';

    removeX(str);
    cout << str << endl;
    return 0;
}


/*
OUTPUT:
Enter string:
abxbxxc
7
abbc
 */