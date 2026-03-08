#include <iostream>
#include <vector>
using namespace std;

void DLS(vector<int> graph[], int node, int limit)
{
    if(limit < 0)
        return;

    cout << node << " ";

    for(int child : graph[node])
    {
        DLS(graph, child, limit - 1);
    }
}

int main()
{
    int n = 5;
    vector<int> graph[6];

    graph[1].push_back(2);
    graph[1].push_back(3);
    graph[2].push_back(4);
    graph[3].push_back(5);

    int depth_limit = 2;

    DLS(graph, 1, depth_limit);

    return 0;
}