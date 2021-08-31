//#include<iostream>
//using namespace std;
//
//void merge(int a[], int l, int m, int r) {
//    int i = l;
//    int j = m + 1;
//    int k = l;
//
//    // Auxiliary Array
//    int B[r + 1];
//
//    while (i <= m && j <= r) {
//        if (a[i] < a[j]) {
//            B[k++] = a[i++];
//        } else {
//            B[k++] = a[j++];
//        }
//    }
//
//    while (i <= m) {
//        B[k++] = a[i++];
//    }
//
//    while (j <= r) {
//        B[k++] = a[j++];
//    }
//
//    for (int x = l; x <= r; x++) {
//        a[x] = B[x];
//    }
//}
//
//void mergeSort(int a[], int l, int r) {
//    if (l < r) {
//        int mid = l + (r - l) / 2;
//        mergeSort(a, l, mid);
//        mergeSort(a, mid + 1, r);
//        merge(a, l, mid, r);
//    }
//
//}
//
//
//int main() {
//    int n;
//    cout << "Enter size of array:\n";
//    cin >> n;
//
//    int arr[n];
//
//    cout << "Enter elements of array...\n";
//    for (int i = 0; i < n; i++) {
//        cout << "Enter element " << i + 1 << ":" << '\n';
//        cin >> arr[i];
//    }
//
//    cout << "Before Merge sort: " << endl;
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//
//    mergeSort(arr, 0, n - 1);
//
//    cout << "After Merge sort: " << endl;
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//
//    return 0;
//}
//
///*
//OUTPUT:
//Enter size of array:
//5
//Enter elements of array...
//Enter element 1:
//4
//Enter element 2:
//5
//Enter element 3:
//2
//Enter element 4:
//3
//Enter element 5:
//1
//Before Merge sort:
//4 5 2 3 1
//After Merge sort:
//1 2 3 4 5
// */