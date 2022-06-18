
#include <vector>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> traversal;
        traversal.push_back(root->val);
        Node*tmp=root;
        for (int i = 0; i < root->children.size(); ++i) {
            if (!tmp->children[i]->children.empty()){
                tmp=tmp->children[i];
                for (int j = 0; j < tmp->children.size() ; ++j) {
                    traversal.push_back(tmp->children[i]->val);
                }
            }

        }
        return traversal;
    }
};