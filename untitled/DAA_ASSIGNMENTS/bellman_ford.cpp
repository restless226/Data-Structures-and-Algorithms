//#include <bits/stdc++.h>
//
//#define int long long
//#define MAX 100
//using namespace std;
//
//struct Edge {
//    int source;
//    int destination;
//    int weight;
//};
//
//void print_graph(int distance[], int vertices) {
//    cout << "\nvertex" << "  distance from source";
//    for (int i = 1; i <= vertices; i++) {
//        cout << "\n" << i << "\t\t\t" << distance[i];
//    }
//}
//
//int bellman_ford(int vertices, Edge edge_list[], int source, int edges) {
//    int u, v, weight;
//    int distance[MAX];
//
//    // initializing 'distance[]' with INT_MAX denoting infinite distance
//    for (int i = 0; i < vertices; i++) {
//        distance[i] = INT_MAX;
//    }
//
//    // distance of source vertex from itself is 0
//    distance[source] = 0;
//
//    // relaxing all the edges (vertices - 1) times
//    for (int i = 0; i < vertices - 1; i++) {
//        for (int j = 0; j < edges; j++) {
//            u = edge_list[j].source;
//            v = edge_list[j].destination;
//            weight = edge_list[j].weight;
//
//            if (distance[u] != INT_MAX && distance[u] + weight < distance[v]) {
//                distance[v] = distance[u] + weight;
//            }
//        }
//    }
//
//    // checking if negative cycle is present or not
//    for (int j = 0; j < edges; j++) {
//        u = edge_list[j].source;
//        v = edge_list[j].destination;
//        weight = edge_list[j].weight;
//
//        if (distance[u] + weight < distance[v]) {
//            cout << "\n\n[WARNING] Negative weight cycle exists\n";
//            return 0;
//        }
//    }
//
//    print_graph(distance, vertices);
//
//    return 1;
//}
//
//int32_t main() {
//    int vertices, edges, source;
//    Edge edge_list[MAX];
//
//    cout << "Enter the number of vertices: ";
//    cin >> vertices;
//
//    printf("Enter the source vertex of the graph: ");
//    cin >> source;
//
//    cout << "\nEnter no of edges: ";
//    cin >> edges;
//
//    for (int i = 0; i < edges; i++) {
//        cout << "Edge " << i + 1 << " : ";
//        cout << "Enter source vertex : ";
//        cin >> edge_list[i].source;
//        cout << "Enter destination vertex : ";
//        cin >> edge_list[i].destination;
//        cout << "Enter weight : ";
//        cin >> edge_list[i].weight;
//    }
//
//    bellman_ford(vertices, edge_list, source, edges);
//
//    return 0;
//}
//
///*
//TESTCASE 1 OUTPUT:
//
//Enter the number of vertices: 4
//Enter the source vertex of the graph: 1
//
//Enter no of edges: 4
//
//Edge 1 :
//Enter source vertex : 1
//Enter destination vertex : 2
//Enter weight : 4
//
//Edge 2 :
//Enter source vertex : 1
//Enter destination vertex : 3
//Enter weight : 3
//
//Edge 3 :
//Enter source vertex : 2
//Enter destination vertex : 4
//Enter weight : 7
//
//Edge 4 :
//Enter source vertex : 3
//Enter destination vertex : 4
//Enter weight : 2
//
//vertex  distance from source
//1			0
//2			4
//3			3
//4			0
//
//
//TESTCASE 2 OUTPUT:
//
//Enter the number of vertices: 7
//Enter the source vertex of the graph: 1
//
//Enter no of edges: 10
//
//Edge 1 :
//Enter source vertex : 1
//Enter destination vertex : 2
//Enter weight : 6
//
//Edge 2 :
//Enter source vertex : 1
//Enter destination vertex : 3
//Enter weight : 5
//
//Edge 3 :
//Enter source vertex : 1
//Enter destination vertex : 4
//Enter weight : 5
//
//Edge 4 :
//Enter source vertex : 3
//Enter destination vertex : 2
//Enter weight : -2
//
//Edge 5 :
//Enter source vertex : 4
//Enter destination vertex : 3
//Enter weight : -2
//
//Edge 6 :
//Enter source vertex : 3
//Enter destination vertex : 5
//Enter weight : 1
//
//Edge 7 :
//Enter source vertex : 2
//Enter destination vertex : 5
//Enter weight : -1
//
//Edge 8 :
//Enter source vertex : 4
//Enter destination vertex : 6
//Enter weight : -1
//
//Edge 9 :
//Enter source vertex : 6
//Enter destination vertex : 7
//Enter weight : 3
//
//Edge 10 :
//Enter source vertex : 5
//Enter destination vertex : 7
//Enter weight : 3
//
//vertex  distance from source
//1			0
//2			1
//3			3
//4			5
//5			0
//6			4
//7			0
//
//
//TESTCASE 3 OUTPUT:
//Enter the number of vertices:4
// Enter the source vertex of the graph:1
//
//Enter no of edges:4
//
//Edge 1 :
//Enter source vertex :1
// Enter destination vertex :2
// Enter weight :5
//
//Edge 2 :
//Enter source vertex :2
// Enter destination vertex :3
// Enter weight :1
//
//Edge 3 :
//Enter source vertex :3
// Enter destination vertex :4
// Enter weight :2
//
//Edge 4 :
//Enter source vertex :4
// Enter destination vertex :2
// Enter weight :-4
//
//
//[WARNING] Negative weight cycle exists
//*/