#include "mst_header.h"
#include <iostream>

using namespace std;

int main() {
    graph g;
    g.create_graph();
    cout << endl << "Prims Algorithm " << endl;
    g.prim();
    cout << endl << "Kruskals Algorithm " << endl;
    g.kruskals();
    return 0;
}