//#include <iostream>
//using namespace std;
//
//int findminVertex(int * distances,bool * visited,int n){
//    int minVertex=-1;
//
//    for (int i = 0; i < n; ++i) {
//        if((minVertex==-1 || distances[i]<distances[minVertex]) && !visited[i]){
//            minVertex=i;
//        }
//    }
//
//    return minVertex;
//}
//
//
//void dijikstras(int** edges,int n){
//    bool *visited=new bool[n];
//    int *distances=new int[n];
//
//    // initial values -
//    for (int i = 0; i < n; ++i) {
//        visited[i]= false;
//        distances[i]=INT_MAX;
//    }
//
//    // source vertex be 0
//    distances[0]=0;
//
//    for (int i = 0; i < n-1; ++i) {
//        int minVertex=findminVertex(distances,visited,n);
//        visited[minVertex]=true;
//
//        for (int j = 0; j < n; ++j) {
//            if(edges[minVertex][j]!=0 && !visited[j]){
//                int dist=distances[minVertex]+edges[minVertex][j];
//                if(distances[j]>dist){
//                    distances[j]=dist;
//                }
//            }
//        }
//    }
//
//    cout<<"Printing min distance..."<<endl;
//    for (int i = 0; i < n; ++i) {
//        cout<<i<<" "<<distances[i]<<endl;
//    }
//
//    delete [] distances;
//    delete [] visited;
//
//}
//
//int main(){
//    int n,e;
//    cout<<"Enter no of vertices:"<<endl;
//    cin>>n;
//    cout<<"Enter no of edges:"<<endl;
//    cin>>e;
//    cout<<endl;
//
//    int ** edges=new int*[n];   // adjecency matrix
//
//    for(int i=0;i<n;i++){
//        edges[i]=new int[n];
//        for(int j=0;j<n;j++){
//           edges[i][j]=0;
//        }
//    }
//
//    cout<<"Enter edges:"<<endl;
//
//    for(int i=0;i<e;i++){
//        int f,s,weight;
//
//        cout<<"Enter first vertex of edge:"<<endl;
//        cin>>f;
//
//        cout<<"Enter second vertex of edge:"<<endl;
//        cin>>s;
//
//        cout<<"Enter weight of edge:"<<endl;
//        cin>>weight;
//        cout<<endl;
//
//        edges[f][s]=edges[s][f]=weight; // filling entries in adjencency matrix
//    }
//
//    dijikstras(edges,n);
//
//    for(int i=0;i<e;i++){
//        delete edges[i];
//    }
//
//    delete [] edges;
//
//    return 0;
//}
//
///*
// *
// * OUTPUT:
// *
// *
//Enter no of vertices:
//5
//Enter no of edges:
//7
//
//Enter edges:
//Enter first vertex of edge:
//0
//Enter second vertex of edge:
//1
//Enter weight of edge:
//4
//
//Enter first vertex of edge:
//0
//Enter second vertex of edge:
//2
//Enter weight of edge:
//8
//
//Enter first vertex of edge:
//1
//Enter second vertex of edge:
//3
//Enter weight of edge:
//5
//
//Enter first vertex of edge:
//1
//Enter second vertex of edge:
//2
//Enter weight of edge:
//2
//
//Enter first vertex of edge:
//2
//Enter second vertex of edge:
//3
//Enter weight of edge:
//5
//
//Enter first vertex of edge:
//2
//Enter second vertex of edge:
//4
//Enter weight of edge:
//9
//
//Enter first vertex of edge:
//3
//Enter second vertex of edge:
//4
//Enter weight of edge:
//4
//
//Printing min distance...
//0 0
//1 4
//2 6
//3 9
//4 13
// */