//// { Driver Code Starts
//#include<iostream>
//#include<stack>
//using namespace std;
//void push(int a);
//bool isFull(int n);
//bool isEmpty();
//int pop();
//int getMin();
////This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
//stack<int> s;
//int main(){
//    int t;
//    cin>>t;
//    while(t--){
//        int n,a;
//        cin>>n;
//        while(!isEmpty()){
//            pop();
//        }
//        while(!isFull(n)){
//            cin>>a;
//            push(a);
//        }
//        cout<<getMin()<<endl;
//    }
//}// } Driver Code Ends
//
//
///*Complete the function(s) below*/
//void push(int a) {
//    //add code here.
//    s.push(a);
//}
//
//bool isFull(int n)
//{
//    //add code here.
//    if(s.size()==n){
//        return true;
//    } else{
//        return false;
//    }
//
//}
//
//bool isEmpty()
//{
//    //add code here.
//    if(s.empty()){
//        return true;
//    } else{
//        return false;
//    }
//
//}
//
//int pop()
//{
//    //add code here.
//    s.pop();
//}
//
//int getMin() {
//    //add code here.
//    int a[s.size()];
//    int i=0;
//    while(!s.empty()){
//        a[i]=s.top();
//        s.pop();
//        i++;
//    }
//    int min=a[0];
//    for(int j=1;j<=i;i++){
//        if(min>a[j]){
//            min=a[j];
//        }
//    }
//    return min;
//
//
//}