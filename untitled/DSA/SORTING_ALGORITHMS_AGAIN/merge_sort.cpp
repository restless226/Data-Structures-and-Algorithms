//#include <iostream>
//
//using namespace std;
//
//
//void merge(int a[], int l, int m, int r) {
//    // Your code here
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
//
//    for (int x = l; x <= r; x++) {
//        a[x] = B[x];
//    }
//}
//
//
//void mergeSort(int a[], int l, int r) {
//    //code here
//
//    // Recursive Merge Sort
//    if (l < r) {
//        int mid = l + (r - l) / 2;
//        mergeSort(a, l, mid);
//        mergeSort(a, mid + 1, r);
//        merge(a, l, mid, r);
//    }
//
//
//    // Iterative Merge Sort
////        int p;
////
////        int low;
////        int high;
////        int mid;
////
////        int n=r-l+1;
////
////        // 2-way iterative merge sort
////        for(p=2;p<=n;p=p*2){
////            for(int i=0;i+p-1<n;i+=p){
////                low=i;
////                high=i+p-1;
////                mid=(low+high)/2;
////
////                merge(a,low,mid,high);
////            }
////        }
////
////        // If array size is not power of 2 or array has odd size then -
////        if((p<2)<n){
////            merge(a,0,(p/2)-1,n-1);
////        }
//
//}
//
//
//int main() {
//
//    int size;
//    cout << "ENTER SIZE OF ARRAY:" << endl;
//    cin >> size;
//
//    int a[size];
//
//    cout << "ENTER ELEMENTS IN ARRAY:" << endl;
//    for (int j = 0; j < size; ++j) {
//        cin >> a[j];
//    }
//
//
//    mergeSort(a, 0, size - 1);
//
//
//    cout << "PRINTING SORTED ARRAY:" << endl;
//    for (int j = 0; j < size; ++j) {
//        cout << a[j] << " ";
//    }
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//ENTER SIZE OF ARRAY:
//9
//ENTER ELEMENTS IN ARRAY:
//4
//5
//3
//6
//3
//9
//5
//7
//9
//PRINTING SORTED ARRAY:
//3 3 4 5 5 6 7 9 9
//
//Process finished with exit code 0
//
// */