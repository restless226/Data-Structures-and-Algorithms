//#include <iostream>
//#include <QUEUE>
//#include <algorithm>
//
//using namespace std;
//
//// [NOTE]: Works only for "connected GRAPHS_OLD"
//// we make it working for "dis-connected GRAPHS_OLD" by using void DFS() function
//void printDFS(int **edges, int n, int sv, bool *visited) {
//
//    cout << sv << " ";
//    visited[sv] = true;
//
//    for (int i = 0; i < n; ++i) {
//        if (i == sv) {
//            continue;
//        }
//        if (edges[sv][i] == 1) {
//            if (visited[i]) {
//                continue;
//            }
//            printDFS(edges, n, i, visited);
//        }
//    }
//}
//
//// [NOTE]: Works only for "connected GRAPHS_OLD"
//// we make it working for "dis-connected GRAPHS_OLD" by using void BFS() function
//void printBFS(int **edges, int n, int sv, bool *visited) {
//
//    QUEUE<int> pendingVertices;     // vertices which are seen but not printed
//
//    pendingVertices.push(sv);
//    visited[sv] = true;
//
//    while (!pendingVertices.empty()) {
//        int currentVertex = pendingVertices.front();
//        pendingVertices.pop();
//        cout << currentVertex << " ";
//
//        for (int i = 0; i < n; i++) {
//            // [WEIRD CASE]: we are going to next iteration as checking for "self-edge" is meaningless
//            if (i == currentVertex) {
//                continue;
//            }
//            if (edges[currentVertex][i] == 1 && !visited[i]) {
//                pendingVertices.push(i);
//                visited[i] = true;
//            }
//        }
//    }
//
////    delete[] visited;
//}
//
//
//void DFS(int **edges, int n) {
//    bool *visited = new bool[n];
//
//    for (int i = 0; i < n; ++i) {
//        visited[i] = false;
//    }
//
//    for (int i = 0; i < n; ++i) {
//        if (!visited[i]) {
//            printDFS(edges, n, i, visited);
//        }
//    }
//}
//
//void BFS(int **edges, int n) {
//    bool *visited = new bool[n];
//
//    for (int i = 0; i < n; ++i) {
//        visited[i] = false;
//    }
//
//    for (int i = 0; i < n; ++i) {
//        if (!visited[i]) {
//            printBFS(edges, n, i, visited);
//        }
//    }
//}
//
//
//bool hasPath(int **edges, int n, int sv, int ev, bool *visited) {
//    visited[sv] = true;
//
//    if (edges[sv][ev] == 1) {
//        return true;
//    }
//
//
//    for (int i = 0; i < n; i++) {
//        if (visited[i]) {
//            continue;
//        }
//        if (edges[sv][i] == 1) {
//            bool ans = hasPath(edges, n, i, ev, visited);
//            if (ans) {
//                return true;
//            }
//        }
//    }
//
//    return false;
//}
//
//// NOOB METHOD
////TODO
//vector<int> getPathDFSNoob(int **edges, int n, int sv, int ev, bool *visited) {
//
//    vector<int> v;
//    vector<int> v1;
//
//    if (sv == ev) {
//        v.push_back(sv);
//        return v;
//    }
//
//    visited[sv] = true;
//
//    for (int i = 0; i < n; ++i) {
//        if (visited[i]) {
//            continue;
//        }
//        if (edges[sv][i] == 1) {
//            v1 = getPathDFSNoob(edges, n, i, ev, visited);
//
//            for (auto itr:v1) {
//                v.push_back(itr);
//            }
//
//        }
//    }
//
//    if (!v.empty()) {
//        v.push_back(sv);
//    }
//
//
//    return v;
//
//}
//
//
//// PRO METHOD
//// Using Pointer vectors
//vector<int> *getPathDFS(int **edges, int n, int sv, int ev, bool *visited) {
//
//    if (sv == ev) {
//        vector<int> *v = new vector<int>;
//        v->push_back(sv);
//        return v;
//    }
//
//    vector<int> *vFinal = NULL;
//    visited[sv] = true;
//
//    for (int i = 0; i < n; ++i) {
//        if (visited[i]) {
//            continue;
//        }
//        if (edges[sv][i] == 1) {
//            vector<int> *v1 = getPathDFS(edges, n, i, ev, visited);
//
//            if (v1 != NULL) {
//                vFinal = v1;
//                break;
//            }
//        }
//    }
//
//    if (vFinal != NULL) {
//        vFinal->push_back(sv);
//    }
//
//
//    return vFinal;
//
//}
//
//
//
////TODO
//vector<int>* getPathBFS(){
//
//}
//
//
////TODO
//bool isConnected(){
//
//}
//
////TODO
//vector<vector<int>> getConnectedComponents(){
//
//}
//
//int main() {
//
//    int n;  // vertices
//    int e;  // edges
//
//    cout << "Enter no of vertices:" << endl;
//    cin >> n;
//
//    cout << "Enter no of edges:" << endl;
//    cin >> e;
//
//
//    int **edges = new int *[n]; // 2D dynamic array
//
//    for (int i = 0; i < n; ++i) {
//        edges[i] = new int[n];
//        for (int j = 0; j < n; ++j) {
//            // to clear garbage values
//            edges[i][j] = 0;  // 0 means no edge
//        }
//    }
//
//    // making up adjecency matrix
//    for (int i = 0; i < e; ++i) {
//        int f, s;
//        cout << "Enter first vertex in edge " << i + 1 << ":" << endl;
//        cin >> f;
//        cout << "Enter second vertex in edge " << i + 1 << ":" << endl;
//        cin >> s;
//        cout << endl;
//
//        edges[f][s] = 1;
//        edges[s][f] = 1;
//    }
//
//    bool *visited = new bool[n];
//
//
//    int choice;
//
//    while (true) {
//        cout << "Enter your choice:";
//        cout << "\nPress:"
//                "\n1 FOR DFS"
//                "\n2.FOR BFS"
//                "\n3.TO CHECK WHETHER THERE IS A PATH BETWEEN GIVEN TWO VERTICES"
//                "\n4.TO CHECK WHETHER GIVEN GRAPH IS CONNECTED OR NOT"
//                "\n5 TO EXIT";
//        cout << endl;
//        cin >> choice;
//
//        switch (choice) {
//            case 1:
//                for (int i = 0; i < n; ++i) {
//                    visited[i] = false;
//                }
//
//                cout << "DFS:" << endl;
//                printDFS(edges, n, 0, visited);    // 0 is starting vertex (sv) here
//                cout << endl;
//
//
//                cout << "DFS FINAL:" << endl;
//                DFS(edges, n);
//                cout << '\n';
//                break;
//            case 2:
//                for (int i = 0; i < n; ++i) {
//                    visited[i] = false;
//                }
//
//                cout << "BFS:" << endl;
//                printBFS(edges, n, 0, visited);    // 0 is starting vertex (sv) here
//                cout << endl << '\n';
//
//                cout << "BFS FINAL:" << endl;
//                BFS(edges, n);
//                cout << '\n' << '\n';
//                break;
//
//            case 3:
//                cout << "TO CHECK WHETHER THERE IS A PATH BETWEEN GIVEN TWO VERTICES:" << endl;
//                int sv;
//                int ev;
//
//                cout << "Enter first vertex:" << endl;
//                cin >> sv;
//                cout << "Enter second vertex:" << endl;
//                cin >> ev;
//
//                for (int i = 0; i < n; ++i) {
//                    visited[i] = false;
//                }
//
//
//                if (hasPath(edges, n, sv, ev, visited)) {
//                    for (int i = 0; i < n; ++i) {
//                        visited[i] = false;
//                    }
//
//                    cout << "PATH PRESENT BY DFS IS:" << endl;
//
//
//                    //TODO
//                    //        vector<int> v = getPath(edges, n, sv, ev, visited);
//                    //        reverse(v.begin(),v.end());
//                    //        for (auto itr:v) {
//                    //            cout << itr << " ";
//                    //        }
//                    //        cout << endl;
//
//
//                    vector<int> *v1 = getPathDFS(edges, n, sv, ev, visited);
//
//                    if (v1 != NULL) {
//                        reverse(v1->begin(), v1->end());
//                    }
//
//                    for (auto itr:*v1) {
//                        cout << itr << " ";
//                    }
//                    cout << endl;
//
//
//
//                    cout << "PATH PRESENT BY BFS IS:" << endl;
//
//                    v1 = getPathDFS(edges, n, sv, ev, visited);
//
//                    if (v1 != NULL) {
//                        reverse(v1->begin(), v1->end());
//                    }
//
//                    for (auto itr:*v1) {
//                        cout << itr << " ";
//                    }
//                    cout << endl;
//
//
//                    delete [] &v1;
//                    delete [] v1;
//
//                } else {
//                    cout << "NO PATH PRESENT" << endl;
//                }
//
//                cout << '\n' << '\n';
//
//                break;
//
//            case 4:
//                for (int i = 0; i < n; ++i) {
//                    visited[i] = false;
//                }
//                break;
//            case 5:
//                // deleting edges[][] and visited[] array
//                delete[] visited;
//                for (int i = 0; i < n; ++i) {
//                    delete[] edges[i];
//                }
//                delete[] edges;
//
//                cout << "Exiting..." << endl;
//                _Exit(0);
//                break;
//        }
//    }
//
//
//    return 0;
//}