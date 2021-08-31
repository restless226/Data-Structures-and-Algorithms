//#include <iostream>
//using namespace std;
//
//
//int findMinVertex(int* weights,bool* visited,int n){
//    int minVertex=-1;
//
//    for(int i=0;i<n;i++){
//        if(!visited[i]  &&(minVertex==-1 || weights[i]<weights[minVertex])){
//            minVertex=i;
//        }
//    }
//    return minVertex;
//
//}
//
//void Prims(int **edges,int n){
//
//    int *parent=new int[n];
//    int *weights=new int[n];
//    bool *visited=new bool[n];
//
//    for (int i = 0; i < n; i++) {
//        visited[i]= false;
//        weights[i]=INT_MAX;
//    }
//
//    parent[0]=-1;
//    weights[0]=0;
//
//    for (int i = 0; i < n-1; i++) {
//
//        // Find minimum vertex
//        int minVertex=findMinVertex(weights,visited,n);
//
//        visited[minVertex]=true;
//
//        // Explore unvisited neighbours
//        for (int j = 0; j < n; ++j) {
//            if(edges[minVertex][j]!=0 && !visited[j]){
//                if(edges[minVertex][j]<weights[j]){
//                    weights[j]=edges[minVertex][j];
//                    parent[j]=minVertex;
//                }
//            }
//        }
//    }
//
//
//    cout<<"Printing MST..."<<endl;
//    for (int i = 1; i < n; ++i) {
//        if(parent[i]<i){
//            cout<<parent[i]<<" "<<i<<" "<<weights[i]<<endl;
//        }else{
//            cout<<i<<" "<<parent[i]<<" "<<weights[i]<<endl;
//        }
//    }
//
//
//
//}
//
//
//
//int main() {
//    int n, e;
//    cout << "Enter no of vertices:" << endl;
//    cin >> n;
//    cout << "Enter no of edges:" << endl;
//    cin >> e;
//    cout << endl;
//
//    int **edges = new int *[n];   // adjecency matrix
//
//    for (int i = 0; i < n; i++) {
//        edges[i] = new int[n];
//        for (int j = 0; j < n; j++) {
//            edges[i][j] = 0;
//        }
//    }
//
//    cout << "Enter edges:" << endl;
//
//    for (int i = 0; i < e; i++) {
//        int f, s, weight;
//
//        cout << "Enter first vertex of edge:" << endl;
//        cin >> f;
//
//        cout << "Enter second vertex of edge:" << endl;
//        cin >> s;
//
//        cout << "Enter weight of edge:" << endl;
//        cin >> weight;
//        cout << endl;
//
//        edges[f][s] = edges[s][f] = weight; // filling entries in adjencency matrix
//    }
//
//    Prims(edges, n);
//
//    for (int i = 0; i < n; i++) {
//        delete edges[i];
//    }
//
//    delete[] edges;
//
//    return 0;
//}