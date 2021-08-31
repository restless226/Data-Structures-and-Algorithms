///* Name : Rohit Pendse
////	Roll no. : 23333
////	Subject : Data Structures and Algorithms
//*/
//
//#include <iostream>
//
//using namespace std;
//
//// input variables
//int s1, s2;
//int *a = new int[s1];
//int *b = new int[s2];
//int *c = new int[s1 + s2];
//
//
//void Merge(int array1[], int array2[], int array3[], int n1, int n2) {
//
//    int temp;
//
//    //sorting array1 in ascending order
//    for (int k = 0; k < n1; k++) {
//        for (int l = k + 1; l < n1; l++) {
//            if (array1[k] > array1[l]) {
//                temp = array1[k];
//                array1[k] = array1[l];
//                array1[l] = temp;
//            }
//        }
//    }
//
//
//    int temp1;
//
//    //sorting array2 in ascending order
//    for (int k = 0; k < n2; k++) {
//        for (int l = k + 1; l < n2; l++) {
//            if (array1[k] > array1[l]) {
//                temp1 = array2[k];
//                array2[k] = array2[l];
//                array2[l] = temp1;
//            }
//        }
//    }
//
//
//    int i = 0, j = 0, k = 0;
//
//    // Traverse both array
//    while (i < n1 && j < n2) {
//        if (array1[i] < array2[j]) {
//            array3[k++] = array1[i++];
//        } else {
//            array3[k++] = array2[j++];
//        }
//    }
//
//    // Store remaining elements of first array
//    while (i < n1)
//        array3[k++] = array1[i++];
//
//    // Store remaining elements of second array
//    while (j < n2)
//        array3[k++] = array2[j++];
//
//
//    //print sorted array elements
//    cout << "Array after merging" << endl;
//    for (int z = 0; z < n1 + n2; z++) {
//        cout << array3[z] << " ";
//    }
//}
//
//int main() {
//    // Taking elements of arrays a & b as input
//
//    cout << "Enter size of first array:";
//    cin >> s1;
//    cout << "Enter elements in array 1:" << endl;
//    for (int i = 0; i < s1; i++) {
//        cin >> a[i];
//    }
//
//    cout << "Enter size of second array:";
//    cin >> s2;
//    cout << "Enter elements in array 2:" << endl;
//    for (int j = 0; j < s2; j++) {
//        cin >> b[j];
//    }
//
//    // calling merge function
//    Merge(a, b, c, s1, s2);
//
//    return 0;
//}
//
//// Output-
//
////Enter size of first array:5
//
////Enter elements in array 1:
////2
////4
////1
////3
////7
//
////Enter size of second array:3
//
////Enter elements in array 2:
////2
////2
////4
//
////0xfc19d00xfc19f0Array after merging
////1 2 2 2 3 4 4 7
//
////Process finished with exit code -1073740940 (0xC0000374)