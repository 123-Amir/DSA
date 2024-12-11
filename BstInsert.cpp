#include"bits/stdc++.h"
using namespace std;
class Treenode{
    public:
    int data;
    Treenode* left;
    Treenode* right;
    Treenode(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
class BST{
    private:
    Treenode* root;
    Treenode* insert(Treenode* node, int data){
        if(node==nullptr){
            return new Treenode(data);
        }else{
            if(data < node->data){
                node->left = insert(node->left,data);
            }else if(data > node->data){
                node->right = insert(node->right,data);
            }
        }
        return node;
    }
    void inorderTraversal(Treenode* node){
        if(node==nullptr){
            return;
        }
        inorderTraversal(node->left);
        cout<<node->data<<", ";
        inorderTraversal(node->right);  
    }
    public:
    BST(){
        root == nullptr;
    }
    void createRoot(int data){
        root = new Treenode(data);
    }
    void insert(int data){
        root = insert(root , data);
    }
    void inorderTraversal(){
        inorderTraversal(root);
    }
};
int main(){
    BST tree;
    tree.createRoot(13);
    tree.insert(7);
    tree.insert(3);
    tree.insert(8);
    tree.insert(14);
    tree.insert(19);
    tree.insert(18);

    tree.insert(10);// inserting new value

    // traverse
    tree.inorderTraversal();
    return 0;
}
