///*
//PROBLEM STATEMENT:
//Given an undirected, connected and weighted graph G(V, E) with V number of vertices
//(which are numbered from 0 to V-1) and E number of edges.
//Find and print the Minimum Spanning Tree (MST) using Prim's algorithm.
//For printing MST follow the steps -
//1. In one line, print an edge which is part of MST in the format -
//v1 v2 w
//where, v1 and v2 are the vertices of the edge which is included in MST and whose weight is w.
//And v1  <= v2 i.e. print the smaller vertex first while printing an edge.
//2. Print V-1 edges in above format in different lines.
//Note : Order of different edges doesn't matter.
//*/
//
//#include <bits/stdc++.h>
//#define int long long
//using namespace std;
//
//int findMinVertex(int* weights,bool* visited,int n){
//    int minVertex=-1;
//
//    for(int i=0;i<n;i++){
//        if((minVertex==-1 || weights[i]<weights[minVertex]) && !visited[i]){
//            minVertex=i;
//        }
//    }
//    return minVertex;
//}
//
//void prims(int** edges,int n){
//    int* parent=new int[n];
//    int* weights=new int [n];
//    bool* visited=new bool[n];
//
//    // initial values-
//    for(int i=0;i<n;i++){
//        weights[i]=INT_MAX;
//        visited[i]= false;  // as no vertex is visited yet
//    }
//
//    // consider initial vertex as 0
//    parent[0]=-1;
//    weights[0]=0;
//
//    // we have to pick n vertices
//
//    // i=0 upto 'n-1' because for last vertex its neighbours would already have been picked
//    for (int i = 0; i < n-1; ++i) {
//        // find min vertex
//        int minVertex=findMinVertex(weights,visited,n);
//        visited[minVertex]= true;
//
//        // explore un-visited neighbours
//        for(int j=0;j<n;j++){
//            if (edges[minVertex][j]!=0 && !visited[j]){
//                if(edges[minVertex][j]<weights[j]){
//                    weights[j]=edges[minVertex][j];
//                    parent[j]=minVertex;
//                }
//            }
//        }
//    }
//
//    cout<<"Printing MST..."<<endl;
//    for(int i=1;i<n;i++){
//        if(parent[i]<i){
//            cout<<parent[i]<<" "<<i<<" "<<weights[i]<<endl;
//        }else{
//            cout<<i<<" "<<parent[i]<<" "<<weights[i]<<endl;
//        }
//    }
//}
//
//int32_t main(){
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
//    prims(edges,n);
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
//
//
///*
//INPUT:
//
//OUTPUT:
//
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
//6
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
//3
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
//5
//
//Printing MST...
//0 1 4
//1 2 2
//2 3 3
//3 4 5
// */