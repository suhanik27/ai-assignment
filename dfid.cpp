#include <iostream>
#include <vector>
using namespace std;

void DLS(vector<int> graph[], int node, int depth)
{
    if(depth < 0)
        return;

    cout << node << " ";

    for(int child : graph[node])
    {
        DLS(graph, child, depth - 1);
    }
}

int main()
{
    vector<int> graph[6];

    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(4);
    graph[3].push_back(5);

    for(int limit = 0; limit <= 2; limit++)
    {
        cout << "\nDepth Limit " << limit << ": ";
        DLS(graph, 1, limit);
    }

    return 0;
}