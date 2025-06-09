/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    void solve(Node* root, int level, int &maxLevel, vector<int> &result) {
        if (!root) return;
        if (level > maxLevel) {
            result.push_back(root->data);
            maxLevel = level;
        }
    solve(root->left, level + 1, maxLevel, result);
    solve(root->right, level + 1, maxLevel, result);
    }
    vector<int> leftView(Node *root) {
        vector<int> result;
        int maxLevel = 0;
        solve(root, 1, maxLevel, result);
        return result;
        
    }
};