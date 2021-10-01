//#include<iostream>
//
//using namespace std;
//
//int main() {
//    int r1, c1, r2, c2;
//
//    cout << "Enter no of rows in first matrix:" << endl;
//    cin >> r1;
//
//    cout << "Enter no of columns in first matrix:" << endl;
//    cin >> c1;
//
//    cout << "Enter no of rows in second matrix:" << endl;
//    cin >> r2;
//
//    cout << "Enter no of columns in second matrix:" << endl;
//    cin >> c2;
//
//    int m1[r1][c1];
//    int m2[r2][c2];
//
//    int m1_transpose[c1][r1];
//    int m2_transpose[c2][r2];
//
//    int sum[r1][c1];
//    int minus[r1][c1];
//    int mult[r1][c2];
//
//
//    cout << "Enter elements in first matrix rowwise:" << endl;
//    for (int i = 0; i < r1; i++) {
//        for (int j = 0; j < c1; j++) {
//            cin >> m1[i][j];
//        }
//    }
//
//    cout << "Enter elements in second matrix rowwise:" << endl;
//    for (int i = 0; i < r2; i++) {
//        for (int j = 0; j < c2; j++) {
//            cin >> m2[i][j];
//        }
//    }
//
//    // Printing first matrix m1:
//    cout << "\nEntered Matrix m1: " << endl;
//    for (int i = 0; i < r1; i++) {
//        for (int j = 0; j < c1; j++) {
//            cout << " " << m1[i][j];
//            if (j == c1 - 1)
//                cout << endl << endl;
//        }
//    }
//
//    // Printing first matrix m2:
//    cout << "\nEntered Matrix m2: " << endl;
//    for (int i = 0; i < r2; i++) {
//        for (int j = 0; j < c2; j++) {
//            cout << " " << m2[i][j];
//            if (j == c2 - 1)
//                cout << endl << endl;
//        }
//    }
//
//    // Computing transpose of the matrix m1:
//    for (int i = 0; i < r1; i++)
//        for (int j = 0; j < c1; j++) {
//            m1_transpose[j][i] = m1[i][j];
//        }
//
//    cout << "**********TRANSPOSE**********" << endl << endl;
//
//    // Printing transpose of matrix m1:
//    cout << "\nTranspose of Matrix m1: " << endl;
//    for (int i = 0; i < c1; i++)
//        for (int j = 0; j < r1; j++) {
//            cout << " " << m1_transpose[i][j];
//            if (j == r1 - 1)
//                cout << endl << endl;
//        }
//
//    // Computing transpose of the matrix m2:
//    for (int i = 0; i < r2; i++)
//        for (int j = 0; j < c2; j++) {
//            m2_transpose[j][i] = m2[i][j];
//        }
//
//    // Printing transpose of matrix m2:
//    cout << "\nTranspose of Matrix m2: " << endl;
//    for (int i = 0; i < c2; i++)
//        for (int j = 0; j < r2; j++) {
//            cout << " " << m2_transpose[i][j];
//            if (j == r2 - 1)
//                cout << endl << endl;
//        }
//
//    cout << "**********ADDITION**********" << endl << endl;
//
//    // Adding matrices m1 & m2:
//    if (r1 == r2 && c1 == c2) {
//        for (int i = 0; i < r1; i++) {
//            for (int j = 0; j < c1; j++) {
//                sum[i][j] = m1[i][j] + m2[i][j];
//            }
//        }
//    }
//
//    // Displaying the resultant sum matrix:
//    if (r1 == r2 && c1 == c2) {
//        cout << endl << "Sum is: " << endl;
//        for (int i = 0; i < r1; i++) {
//            for (int j = 0; j < c1; j++) {
//                cout << sum[i][j] << "  ";
//                if (j == c1 - 1)
//                    cout << endl;
//            }
//        }
//    } else {
//        cout << "As Matrices m1 & m2 are of different orders addition operation is not possible" << endl;
//    }
//
//    cout << "**********SUBTRACTION**********" << endl << endl;
//    // Subtracting matrices m1 & m2:
//    if (r1 == r2 && c1 == c2) {
//        for (int i = 0; i < r1; i++) {
//            for (int j = 0; j < c1; j++) {
//                minus[i][j] = m1[i][j] - m2[i][j];
//            }
//        }
//    }
//
//    // Displaying the resultant minus matrix.
//    if (r1 == r2 && c1 == c2) {
//        cout << endl << "Subtraction is: " << endl;
//        for (int i = 0; i < r1; i++) {
//            for (int j = 0; j < c1; j++) {
//                cout << sum[i][j] << "  ";
//                if (j == c1 - 1)
//                    cout << endl;
//            }
//        }
//    } else {
//        cout << "As Matrices m1 & m2 are of different orders subtraction operation is not possible" << endl;
//    }
//
//    cout << "\n**********MULTIPLICATION**********" << endl << endl;
//
//    // Initializing all elements of matrix mult to 0
//    for (int i = 0; i < r1; i++) {
//        for (int j = 0; j < c2; j++) {
//            mult[i][j] = 0;
//        }
//    }
//
//    // Multiplying matrix m1 and m2 and storing resultant product elements in matrix mult
//    if (c1 != r2) {
//        cout << "As no of columns of first matrix are not equal to no of rows of second matrix" << endl;
//        cout << "Hence, Multiplication Operation is not possible" << endl;
//    } else {
//        for (int i = 0; i < r1; i++) {
//            for (int j = 0; j < c2; j++) {
//                for (int k = 0; k < c1; k++) {
//                    mult[i][j] += m1[i][k] * m2[k][j];
//                }
//            }
//        }
//    }
//
//    // Displaying mult matrix:
//    cout << endl << "Multiplication Matrix is: " << endl;
//    for (int i = 0; i < r1; i++) {
//        for (int j = 0; j < c2; j++) {
//            cout << " " << mult[i][j];
//            if (j == c2 - 1) {
//                cout << endl;
//            }
//        }
//    }
//    return 0;
//}