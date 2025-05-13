#include <iostream>
using namespace std;

const int MAX = 100;

// Structure to store edge
struct Edge {
    int u, v, weight;
};

// Find function for DSU
int findParent(int parent[], int i) {
    while (parent[i] != i)
        i = parent[i];
    return i;
}

// Union function for DSU
void unionSets(int parent[], int u, int v) {
    int uParent = findParent(parent, u);
    int vParent = findParent(parent, v);
    parent[uParent] = vParent;
}

int main() {
    int V, E;
    Edge edges[MAX];

    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    cout << "Enter edges (u v weight):\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].weight;
    }

    // Sort edges by weight (simple bubble sort)
    for (int i = 0; i < E - 1; i++) {
        for (int j = 0; j < E - i - 1; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }

    int parent[MAX];
    for (int i = 0; i < V; i++) {
        parent[i] = i;
    }

    cout << "\nEdges in MST:\n";
    int mstWeight = 0;
    for (int i = 0, count = 0; count < V - 1 && i < E; i++) {
        int u = edges[i].u;
        int v = edges[i].v;
        int w = edges[i].weight;

        int uParent = findParent(parent, u);
        int vParent = findParent(parent, v);

        if (uParent != vParent) {
            cout << u << " - " << v << " = " << w << endl;
            mstWeight += w;
            unionSets(parent, u, v);
            count++;
        }
    }

    cout << "Total weight of MST: " << mstWeight << endl;

    return 0;
}
