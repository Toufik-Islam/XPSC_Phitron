class solution
{
public:
    // Function to detect cycle in an undirected graph.
    vector<int> visited;
    bool cycle_detect_DFS(int node, vector<int> Adj[], int par)
    {
        visited[node] = 1;
        for (auto it : Adj[node])
        {
            if (par == it)
                continue;
            if (visited[it] == 0)
            {
                bool cycle = cycle_detect_DFS(it, Adj, node);
                if (cycle)
                    return true;
            }
            else if (visited[it] == 1)
                return true;
        }
        visited[node] = 2;
        return false;
    }

    bool isCycle(int V, vector<int> adj[])
    {
        visited.resize(V + 2, 0);
        for (int i = 0; i < V; ++i)
        {
            if (visited[i] == 0)
            {
                if (cycle_detect_DFS(i, adj, -1))
                    return true;
            }
        }
        return false;
    }
};