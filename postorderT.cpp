#include <iostream>
using namespace std;

class TreeNode {
public:
    char data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(char data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }

    // Destructor
    ~TreeNode() {
        delete left;
        delete right;
    }
};

// Pre-order Traversal
void postOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<", ";
}

int main() {
    TreeNode* root = new TreeNode('R');
    TreeNode* nodeA = new TreeNode('A');
    TreeNode* nodeB = new TreeNode('B');
    TreeNode* nodeC = new TreeNode('C');
    TreeNode* nodeD = new TreeNode('D');
    TreeNode* nodeE = new TreeNode('E');
    TreeNode* nodeF = new TreeNode('F');
    TreeNode* nodeG = new TreeNode('G');

    root->left = nodeA;
    root->right = nodeB;

    nodeA->left = nodeC;
    nodeA->right = nodeD;

    nodeB->left = nodeE;
    nodeB->right = nodeF;

    nodeF->left = nodeG;

    // Traverse
    postOrderTraversal(root);
    cout << endl;

    // Clean up memory
    delete root;

    return 0;
}