#include "dijk_header.h"
#include <iostream>

using namespace std;

int main() {
    graph g;
    g.create_graph();
    cout << endl << "Dijkstras Algorithm " << endl;
    g.dijktras();
    return 0;
}
