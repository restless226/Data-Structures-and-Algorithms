
#include <iostream>

using namespace std;

struct edge_s {
    int u, v, w;
};

struct name {
    string name;
};

class graph {
private:
    int weight[20][20];
    int visited[20], d[20], p[20];
    int v, e;
    name names[20];
    edge_s edge[20];
public:
    void create_graph();

    void dijktras();
};