// { Driver Code Starts
#include <iostream>

using namespace std;
#define MAX 1001

int countZeros(int A[MAX][MAX], int N);

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[MAX][MAX];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> A[i][j];
        cout << countZeros(A, n) << endl;
    }
    return 0;
}// } Driver Code Ends


/*you are required to complete this method*/
int countZeros(int A[MAX][MAX], int N) {
//Your code here


    int occ = 0;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            if (A[i][j] == 0) {
                occ++;
            }
        }
    }
    return occ;
}
