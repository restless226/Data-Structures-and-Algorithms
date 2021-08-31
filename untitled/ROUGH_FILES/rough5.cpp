//#include<iostream>
//using namespace std;
//#define ll long long
//
//
//
////void count_no_of_subsets_with_given_diff(ll int mat[n][m], int r,int c)
////{
////    // k must be smaller than or equal to n
////    if (r > n || c>m){
////        return;
////    }
////
////    // row number of first cell in current sub-square of size k x k
////    for (int i=0; i<n-r+1; i++){
////        // column of first cell in current sub-square of size k x k
////        for (int j=0; j<m-c+1; j++)
////        {
////            // Calculate and print sum of current sub-square
////            int sum = 0;
////            for (int p=i; p<r+i; p++)
////                for (int q=j; q<c+j; q++)
////                    sum += mat[p][q];
////            cout << sum << "  ";
////        }
////
////        // Line separator for sub-squares starting with next row
////        cout << endl;
////    }
////}
//
//
//int main(){
//    ll int t,n,m,k;
//
//    cin>>t;
//
//    while (t--){
//        cin>>n>>m>>k;
//
//        ll int a[n][m];
//        ll int worthy_count=0;
//        ll int max=0;
//        ll int min=0;
//
//        for (ll int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cin>>a[i][j];
//
////                if(k==0 && a[i][j]>=0){
////                    worthy_count++;
////                }else if(k==1 && a[i][j]>=1){
////                    worthy_count++;
////                }
//
//            }
//        }
//
//
////        if(k>max){
////            cout<<0<<'\n';
////            continue;
////        }else if(k<=min){
////            // all submatrices to be counted
////        }
////
////        ll int sum;
////        ll int row_count;
////        ll int column_count;
////
////
////
////        for (int i = 0; i < n; ++i) {
////            for (int j = 0; j < m; ++j) {
////                row_count=0;
////                column_count=0;
////                sum=0;
////
////                for (int r = i; r < r+i; r++) {
////                    row_count++;
////                    for (int c = j; c < c+j; c++) {
////                        column_count++;
////                        sum+=a[r][c];
////
////                        cout<<a[r][c]<<" ";
////
////                        if(row_count==column_count && (sum/(row_count*column_count))>=k){
////                            worthy_count++;
////                            continue;
////                        }
////                    }
////                    cout<<endl<<endl;
////                }
////            }
////        }
////
////        cout<<worthy_count<<'\n';
//
//
//
//
//
//
//    }
//    return 0;
//}