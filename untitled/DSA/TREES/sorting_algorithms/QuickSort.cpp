//#include <iostream>
//
//using namespace std;
//
//int partition(int *A1,int start1,int end1){
//    int pivot=A1[end1];
//    int pindex=start1;
//
//    for(int i=start1;i<end1;i++){
//        if(A1[i]<pivot){
//            swap(A1[i],A1[pindex]);
//            pindex+=1;
//        }
//    }
//    swap(A1[pindex],A1[end1]);
//
//    return pindex;
//}
//
//void QuickSort(int A[],int start ,int end){
//
//    if (start<end) {
//        int pindex = partition(A,start,end);
//        QuickSort(A, start, pindex - 1);
//        QuickSort(A, pindex + 1, end);
//    }
//}
//int main() {
//    int s;
//    cout << "Enter size of array:" << endl;
//    cin >> s;
//    int Array[s];
//    cout << endl;
//    for (int i = 0; i < s; i++) {
//        cout << "Enter element " << i + 1 << ":" << endl;
//        cin >> Array[i];
//    }
//
//    cout << "Displaying your array..." << endl;
//    for (int i = 0; i < s; i++) {
//        cout << Array[i] << " ";
//    }
//
//    cout << endl;
//
//    QuickSort(Array,0,s-1);
//
//    cout << "Displaying sorted array..." << endl;
//    for (int i = 0; i < s; i++) {
//        cout << Array[i] << " ";
//    }
//
//    return 0;
//}
//
//// time complexity - O(n**2) worst case
//// recursive algorithm
//// stable sorting algorithm
//// space complexity - O(n)
//// In place sorting algorithm