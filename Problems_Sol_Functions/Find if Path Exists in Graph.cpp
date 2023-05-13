#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    bool found = false;
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if (n == 1)
            return true;
        vector<vector<int>> adjList(n);
        for (auto edge : edges) {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
       }
        vector<bool> isVisited(n);
        vector<int> parent(n);
        DFS(source, destination, adjList, isVisited, parent);

        return found;
    }
    void DFS(int source, int dest, vector<vector<int>> adjList, vector<bool>& isVisited, vector<int>& parent) {
        stack<int> s;
        s.push(source);
        while (!s.empty()) {
            int curr = s.top();
            s.pop();
            if (curr == dest) {
                found = true;
                break;
            }
            if (!isVisited[curr]) {
                isVisited[curr] = true;
                for (int i = 0; i < adjList[curr].size(); i++) {
                    int neighbor = adjList[curr][i];
                    if (!isVisited[neighbor]) {
                        parent[neighbor] = curr;
                        s.push(neighbor);
                    }
                }
            }
        }
    }
};