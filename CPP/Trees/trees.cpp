#include<iostream>
#include<vector>
using namespace std;

class TreeNode{

public:
int data;


TreeNode(int data){
    this->data = data;
}
};


void printTree(TreeNode root){
    cout<<root->data;
    for(int i=0; i<root->child.size(); i++){
        printTree(root->child);
    }
}

int main(){

TreeNode  *root(1);
TreeNode  *node1(2);
TreeNode  *node2(3);

root->child.push_back(&node1);
root->child.push_back(&node2);

printTree(root);


    return 0;
}