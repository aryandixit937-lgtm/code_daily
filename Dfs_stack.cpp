void dfsIterative(int start, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n, false);
    stack<int> st;

    st.push(start);

    while (!st.empty()) {
        int node = st.top();
        st.pop();

        if (!visited[node]) {
            visited[node] = true;
            cout << node << " ";

            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    st.push(neighbor);
                }
            }
        }
    }
}
