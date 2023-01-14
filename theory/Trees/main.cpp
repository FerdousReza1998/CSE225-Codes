#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        char key;
        Node* left;
        Node* right;

        Node(){
        }
        Node(char key){
            this->key = key;
            this->left = NULL;
            this->right = NULL;
        }
};

/*
       A
      / \
     B   C
    / \ / \
   D  E F  G

*/

void preorder (Node* cur){
    if(cur==NULL)
        return;

    cout << cur->key << " ";
    preorder(cur->left);
    preorder(cur->right);
}

void inorder (Node* cur){
    if(cur==NULL)
        return;

    inorder(cur->left);
    cout << cur->key << " ";
    inorder(cur->right);
}

void postorder (Node* cur){
    if(cur==NULL)
        return;




    postorder(cur->right);
    cout << cur->key << " ";
}


int main(){
    Node* root = new Node('A');
    root->left = new Node('B');
    root->right = new Node('C');
    root->left->left = new Node('D');
    root->left->right = new Node('E');
    root->right->left = new Node('F');
    root->right->right = new Node('G');

    cout << "Starting Preorder Traversal" << endl;
    preorder(root);
    cout << endl;

    cout << "Starting Inorder Traversal" << endl;
    inorder(root);
    cout << endl;


    cout << "Starting Postorder Traversal" << endl;
    postorder(root);
    cout << endl;

    return 0;





}
