//#include <iostream>
//#include <queue>
//using namespace std;
//
//void printBFS(int** edges,int n,int sv,bool* visited){
//    queue<int> pendingVertices;// vertices which are seen but not printed
//
//    pendingVertices.push(sv);
//    visited[sv]=true;
//
//    while (!pendingVertices.empty()){
//        int currentVertex=pendingVertices.front();
//        pendingVertices.pop();
//        cout<<currentVertex<<endl;
//
//        for(int i=0;i<n;i++){
//            if(i==currentVertex){
//                continue;
//            }
//            if(edges[currentVertex][i]==1 && !visited[i]){
//                pendingVertices.push(i);
//                visited[i]=true;
//            }
//        }
//
//    }
//}
//
//void printDFS(int** edges,int n,int sv,bool* visited){
//    cout<<sv<<endl;
//    visited[sv]= true;
//    for(int i=0;i<n;i++){
//        if(i==sv){
//            continue;
//        }
//        if(edges[sv][i]==1){
//            if (visited[i]){
//                continue;
//            }
//            printDFS(edges,n,i,visited);
//        }
//    }
//}
//
//void DFS(int** edges, int n){
// bool * visited=new bool[n];
//    for (int i = 0; i < n; ++i) {
//        visited[i]=false;
//    }
//    for (int i = 0; i < n; ++i) {
//        if(!visited[i]){
//            printDFS(edges,n,i,visited);
//        }
//
//    }
//
//
//    delete [] visited;
//}
//
//void BFS(int** edges, int n){
//    bool * visited=new bool[n];
//    for (int i = 0; i < n; ++i) {
//        visited[i]=false;
//    }
//    for (int i = 0; i < n; ++i) {
//        if(!visited[i]){
//            printBFS(edges,n,i,visited);
//        }
//
//    }
//
//
//    delete [] visited;
//}
//
//
//int main(){
//    int n;  // no of vertices
//    int e;  // no of edges
//
//    cout<<"Enter no of vertices:"<<endl;
//    cin>>n;
//    cout<<"Enter no of edges:"<<endl;
//    cin>>e;
//
//    int** edges=new int*[n];
//
//    // to clear garbage values
//    for(int i=0;i<n;i++){
//        edges[i]=new int[n];
//        for(int j=0;j<n;j++){
//            edges[i][j]=0;
//        }
//    }
//
//    // making up adjecency matrix
//    for(int i=0;i<e;i++){
//        int f,s;
//        cout<<"Enter first vertex in edge "<<i+1<<":"<<endl;
//        cin>>f;
//        cout<<"Enter second vertex in edge "<<i+1<<":"<<endl;
//        cin>>s;
//        edges[f][s]=1;
//        edges[s][f]=1;
//    }
//
//    // visited array
//    bool* visited=new bool[n];
//    for (int i = 0; i < n; ++i) {
//        visited[i]= false;
//    }
//
//    cout<<endl;
//
//    // passing edges array, no of vertices and starting vertex
//    cout<<"DFS:"<<endl;
//    printDFS(edges,n,0,visited);
//    cout<<"BFS:"<<endl;
////    printBFS(edges,n,0);
//
//    delete [] visited;
//    for(int i=0;i<n;i++){
//        delete [] edges[i];
//    }
//
//    cout<<endl;
//    cout<<"DFS"<<endl;
//    DFS(edges,n);
//    cout<<"BFS"<<endl;
//    BFS(edges,n);
//    return 0;
//}
//
///*
// * OUTPUT:
//
//Enter no of vertices:
//4
//Enter no of edges:
//3
//Enter first vertex in edge 1:
//0
//Enter second vertex in edge 1:
//2
//Enter first vertex in edge 2:
//2
//Enter second vertex in edge 2:
//1
//Enter first vertex in edge 3:
//1
//Enter second vertex in edge 3:
//3
//
//0
//2
//1
//3
// */
//
//
//
//
//
//
//
//
//
///*
// * OUTPUT2:
//Enter no of vertices:
//8
//Enter no of edges:
//9
//Enter first vertex in edge 1:
//0
//Enter second vertex in edge 1:
//4
//Enter first vertex in edge 2:
//0
//Enter second vertex in edge 2:
//5
//Enter first vertex in edge 3:
//4
//Enter second vertex in edge 3:
//3
//Enter first vertex in edge 4:
//3
//Enter second vertex in edge 4:
//2
//Enter first vertex in edge 5:
//2
//Enter second vertex in edge 5:
//1
//Enter first vertex in edge 6:
//1
//Enter second vertex in edge 6:
//3
//Enter first vertex in edge 7:
//5
//Enter second vertex in edge 7:
//6
//Enter first vertex in edge 8:
//3
//Enter second vertex in edge 8:
//6
//Enter first vertex in edge 9:
//6
//Enter second vertex in edge 9:
//7
//
//DFS:
//0
//4
//3
//1
//2
//6
//5
//7
//BFS:
//0
//4
//5
//3
//6
//1
//2
//7
// */