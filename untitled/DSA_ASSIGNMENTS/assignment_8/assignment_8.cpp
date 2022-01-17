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


void graph::create_graph() {
    int i, a, b, w, j = 0;
    string s, t;
    cout << "Enter number of locations : ";
    cin >> v;
    cout << "Enter number of links : ";
    cin >> e;
    cout << "*****************************" << endl;
    for (int x = 0; x < 20; x++) {
        for (int j = 0; j < 20; j++) {
            weight[x][j] = 0;
            p[x] = visited[x] = 0;
            d[x] = 5000;
        }
    }

    for (int x2 = 0; x2 < v; x2++) {
        cout << "Enter location number " << (x2 + 1) << " : ";
        cin >> names[x2].name;
    }
    cout << "*****************************";

    for (i = 0; i < e; i++) {
        cout << endl << "Enter source location : ";
        cin >> s;
        for (int l = 0; l < v; l++) {
            if (names[l].name == s) {
                a = l;
            }
        }
        cout << "Enter target location : ";
        cin >> t;
        for (int l = 0; l < v; l++) {
            if (names[l].name == t) {
                b = l;
            }
        }
        cout << "Enter distance : ";
        cin >> w;
        weight[a][b] = w;
        edge[i].u = a;
        edge[i].v = b;
        edge[i].w = w;
        weight[b][a] = w;
        cout << "*****************************";
    }
    cout << endl << "Weight matrix : " << endl;
    for (int f = 0; f < v; f++)
        if (f == 0)
            cout << "   " << names[f].name;
        else
            cout << " " << names[f].name;
    cout << endl;
    for (i = 0; i < v; i++) {
        for (j = 0; j < v; j++) {
            if (j == 0)
                cout << " " << names[i].name;
            cout << " " << weight[i][j];
        }
        cout << endl;
    }
}

void graph::dijktras() {
    int i, j, k, u, min, current;
    int s;
    string s2;
    cout << endl << "Enter source location : ";
    cin >> s2;
    for (int l = 0; l < v; l++) {
        if (names[l].name == s2) {
            s = l;
        }
    }
    for (i = 0; i < v; i++) {
        visited[i] = 0;
        if (weight[s][i] != 0)
            d[i] = weight[s][i];
        else d[i] = 32767;
        p[i] = s;
    }
    cout << "Shortest path = " << s;
    cout << endl << "*****************************" << endl;
    current = s;
    visited[current] = 1;
    d[s] = 0;
    cout << endl << "Visited distance and path status is : " << endl << "i" << "\t" << "visited[i]" << "\t" << "p[i]"
         << "\t" << "d[i]";
    for (i = 0; i < v; i++) {
        cout << endl;
        cout << names[i].name << "\t" << names[visited[i]].name << "\t" << "\t" << names[p[i]].name << "\t" << d[i]
             << "\t";
    }
    cout << endl << "*****************************" << endl;
    for (i = 0; i < v - 1; i++) {
        min = 32767;
        for (j = 0; j < v; j++) {
            if (min > d[j] && visited[j] == 0) {
                min = d[j];
                current = j;
            }
        }
        cout << endl << "Selected Vertex is : " << current;
        cout << endl << "Minimum is : " << min;
        visited[current] = 1;
        for (k = 0; k < v; k++) {
            if (visited[k] == 0 && (d[current] + weight[current][k]) < d[k]) {
                if (weight[current][k] != 0) {
                    d[k] = d[current] + weight[current][k];
                    p[k] = current;
                }
            }
        }
        cout << endl << "Visited distance and path status is : " << endl << "i" << "\t" << "visited[i]" << "\t"
             << "p[i]" << "\t" << "d[i]";
        for (int i2 = 0; i2 < v; i2++) {
            cout << endl;
            cout << names[i2].name << "\t" << names[visited[i2]].name << "\t" << "\t" << names[p[i2]].name << "\t"
                 << d[i2] << "\t";
        }
        cout << endl << "*****************************" << endl;
    }
    cout << endl << "Shortest Path from Source to all destinations";
    cout << endl << "Source is -->" << s << endl;
    for (i = 0; i < v; i++) {
        if (i != s) {
            cout << endl << "Location = " << names[i].name << ", Distance = " << d[i];
            cout << " Path = " << names[i].name;
            j = i;
            do {
                j = p[j];
                cout << " <- " << names[j].name;
            } while (j != s);
        }
    }
}


int main() {
    graph g;
    g.create_graph();
    cout << endl << "Dijkstras Algorithm " << endl;
    g.dijktras();
    return 0;
}



/*
Output:

Enter number of locations : 6
Enter number of links : 9
*****************************
Enter location number 1 : S
Enter location number 2 : A
Enter location number 3 : B
Enter location number 4 : C
Enter location number 5 : D
Enter location number 6 : E
*****************************
Enter source location : S
Enter target location : A
Enter distance : 1
*****************************
Enter source location : S
Enter target location : B
Enter distance : 5
*****************************
Enter source location : A
Enter target location : B
Enter distance : 2
*****************************
Enter source location : A
Enter target location : C
Enter distance : 2
*****************************
Enter source location : B
Enter target location : D
Enter distance : 2
*****************************
Enter source location : A
Enter target location : D
Enter distance : 1
*****************************
Enter source location : C
Enter target location : D
Enter distance : 3
*****************************
Enter source location : C
Enter target location : E
Enter distance : 1
*****************************
Enter source location : D
Enter target location : E
Enter distance : 2
*****************************
Weight matrix :
   S A B C D E
 S 0 1 5 0 0 0
 A 1 0 2 2 1 0
 B 5 2 0 0 2 0
 C 0 2 0 0 3 1
 D 0 1 2 3 0 2
 E 0 0 0 1 2 0

Dijkstras Algorithm

Enter source location : S
Shortest path = 0
*****************************

Visited distance and path status is :
i	visited[i]	p[i]	d[i]
S	A		S	0
A	S		S	1
B	S		S	5
C	S		S	32767
D	S		S	32767
E	S		S	32767
*****************************

Selected Vertex is : 1
Minimum is : 1
Visited distance and path status is :
i	visited[i]	p[i]	d[i]
S	A		S	0
A	A		S	1
B	S		A	3
C	S		A	3
D	S		A	2
E	S		S	32767
*****************************

Selected Vertex is : 4
Minimum is : 2
Visited distance and path status is :
i	visited[i]	p[i]	d[i]
S	A		S	0
A	A		S	1
B	S		A	3
C	S		A	3
D	A		A	2
E	S		D	4
*****************************

Selected Vertex is : 2
Minimum is : 3
Visited distance and path status is :
i	visited[i]	p[i]	d[i]
S	A		S	0
A	A		S	1
B	A		A	3
C	S		A	3
D	A		A	2
E	S		D	4
*****************************

Selected Vertex is : 3
Minimum is : 3
Visited distance and path status is :
i	visited[i]	p[i]	d[i]
S	A		S	0
A	A		S	1
B	A		A	3
C	A		A	3
D	A		A	2
E	S		D	4
*****************************

Selected Vertex is : 5
Minimum is : 4
Visited distance and path status is :
i	visited[i]	p[i]	d[i]
S	A		S	0
A	A		S	1
B	A		A	3
C	A		A	3
D	A		A	2
E	A		D	4
*****************************

Shortest Path from Source to all destinations
Source is -->0

Location = A, Distance = 1 Path = A <- S
Location = B, Distance = 3 Path = B <- A <- S
Location = C, Distance = 3 Path = C <- A <- S
Location = D, Distance = 2 Path = D <- A <- S
Location = E, Distance = 4 Path = E <- D <- A <- S
 */