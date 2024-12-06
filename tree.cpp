#include<iostream>
using namespace std;
 class Treenode{
  public:
    Treenode* left;
    Treenode* right;
  Treenode(char data){
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }
 ~TreeNode() {
        delete left;
        delete right;
    }
};
 // Tree structure creation
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
    // Test
    cout << "root->right->left->data: " << root->right->left->data << endl;
    // Clean up memory
    delete root;
    return 0;
}
