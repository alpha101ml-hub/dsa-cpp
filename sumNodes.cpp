// Binary Tree, function to return the sum of all node values (use recursion)

#include<iostream>
using namespace std;

int sumNodes(TreeNode* root){
    if(root==nullptr)
        return 0;

    return sumNodes(root->left) + root->val + sumNodes(root->right);
}