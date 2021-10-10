//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//struct Edge {
//public:
//    int source;
//    int destination;
//    int weight;
//};
//
//bool compare(Edge e1, Edge e2) {
//    return e1.weight < e2.weight;
//}
//
//int findParent(int v, int *parent) {
//    if (parent[v] == v) {
//        return v;
//    }
//    return findParent(parent[v], parent);
//}
//
//void kruskals(Edge *arr1, int n1, int E1) {
//    // sorting array in ascending order based on weights
//    // in order to pick up the edge with min weight
//    sort(arr1, arr1 + E1, compare);
//
//    Edge *output = new Edge[n1 - 1];    // o/p array containing MST edges
//
//    int *parent = new int[n1];
//    for (int i = 0; i < n1; i++) {
//        parent[i] = i;    // as each vertex is parent of itself
//    }
//
//
//    int count = 0;    // count of how many edges are currently added in MST
//    int i = 0;        // index which tells us on which index we are currently working
//    while (count != n1 - 1) {
//        Edge currentEdge = arr1[i];
//
//        // to check if we can add currentEdge in MST or not
//        int sourceParent = findParent(currentEdge.source, parent);
//        int destinationParent = findParent(currentEdge.destination, parent);
//
//        // checking whether addition of edge will introduce a cycle or not
//        if (sourceParent != destinationParent) {
//            output[count] = currentEdge;
//            count++;
//
//            parent[sourceParent] = destinationParent;
//        }
//        i++;
//    }
//
//    cout << "Printing MST..." << endl;
//    //cout<<"source"<<" "<<"destination"<<" "<<"weight"<<endl;
//    for (int j = 0; j < n1 - 1; j++) {
//        if (output[j].source < output[j].destination) {
//            cout << output[j].source << "   " << output[j].destination << "     " << output[j].weight << endl;
//        } else {
//            cout << output[j].destination << "   " << output[j].source << "     " << output[j].weight << endl;
//        }
//    }
//}
//
//
//int main() {
//    int n;  // total no of vertices
//    int E;  // total no of edges
//
//    cout << "Enter no of vertices:" << endl;
//    cin >> n;
//    cout << "Enter total no of edges:" << endl;
//    cin >> E;
//
//    cout << endl;
//
//    Edge *input_array = new Edge[E];    // array to store values of s,d,w
//
//    for (int i = 0; i < E; i++) {
//        int s, d, w;
//        cout << "Enter source " << i + 1 << ":" << endl;
//        cin >> s;
//        cout << "Enter destination " << i + 1 << ":" << endl;
//        cin >> d;
//        cout << "Enter weight " << i + 1 << ":" << endl;
//        cin >> w;
//        cout << endl;
//
//        input_array[i].source = s;
//        input_array[i].destination = d;
//        input_array[i].weight = w;
//    }
//
//    kruskals(input_array, n, E);        // passing array of structures, no of vertices, no of edges
//
//    return 0;
//}
//
///*
//OUTPUT:
//
//Enter no of vertices:
//6
//Enter total no of edges:
//11
//Enter source 1:
//0
//Enter destination 1:
//1
//Enter weight 1:
//2
//
//Enter source 2:
//1
//Enter destination 2:
//3
//Enter weight 2:
//1
//
//Enter source 3:
//0
//Enter destination 3:
//2
//Enter weight 3:
//4
//
//Enter source 4:
//2
//Enter destination 4:
//4
//Enter weight 4:
//9
//
//Enter source 5:
//4
//Enter destination 5:
//5
//Enter weight 5:
//5
//
//Enter source 6:
//3
//Enter destination 6:
//5
//Enter weight 6:
//7
//
//Enter source 7:
//4
//Enter destination 7:
//3
//Enter weight 7:
//11
//
//Enter source 8:
//2
//Enter destination 8:
//5
//Enter weight 8:
//10
//
//Enter source 9:
//0
//Enter destination 9:
//3
//Enter weight 9:
//3
//
//Enter source 10:
//2
//Enter destination 10:
//1
//Enter weight 10:
//8
//
//Enter source 11:
//2
//Enter destination 11:
//3
//Enter weight 11:
//6
//
//Printing MST...
//1   3     1
//0   1     2
//0   2     4
//4   5     5
//3   5     7
//
//Process finished with exit code 0
// */