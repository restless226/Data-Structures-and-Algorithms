///*
//// Name : Rohit Pendse
////	Roll no. : 23333
////	Subject : Data Structures and Algorithms
// */
//#include <iostream>
//using namespace std;
//
//void segregate(int array1[], int array2[], int n1, int n2){
//
//    int array3[n1+n2];
//
//    for (int i = 0; i < 5; i++) {
//        array3[i] = array1[i];
//    }
//    for (int j = 0; j < 5; j++) {
//        array3[j + 5] = array2[j];
//    }
//
//    int e=0,o=0;
//
//    for(int i = 0;i<n1+n2;i++){
//        if(array3[i]%2==0){
//            e++;
//        }else{
//            o++;
//        }
//    }
//
//
//    int even[e];
//    int odd[o];
//
//    int a=0,b=0;
//    for(int i=0;i<n1;i++){
//        if(array3[i]%2==0){
//            even[a]=array3[i];
//            a++;
//        }else{
//            odd[b]=array3[i];
//            b++;
//        }
//    }
//
//    cout<<endl;
//
//    // displaying array containing even elements
//    cout << "array containing even elements" << endl;
//    for (int z = 0; z < e; z++) {
//        cout << odd[z] << " ";
//    }
//
//    cout<<endl;
//
//    // displaying array containing odd elements
//    cout << "array containing odd elements" << endl;
//    for (int y = 0; y < o; y++) {
//        cout << odd[y] << " ";
//    }
//
//
//}
//int main() {
//
//    // input variables
//    int s1, s2;
//    int *a = new int[s1];
//    int *b = new int[s2];
//
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
//    // function call
//    segregate(a, b, s1, s2);
//
//    return 0;
//}