#include <iostream>
using namespace std;

class Node
{
  private:
    Node* root;
    Node* right;
    Node* left;
    int data;
  
  public:
    Node();
    Node(int);
    Node* Insert(Node* root, int value);
    void Inorder(Node* root);
    void printTree(Node* root, int value);

};

Node::Node()
{
  data = 0;
  left = right = NULL;
}

Node::Node(int value)
{
  data = value;
  right = left = NULL;
}
Node* Node::Insert(Node* root, int value)
{
    if(root == NULL)
    { root = new Node(value);
      return root;
    }
    if(root->data > value)
    {
      root->left = Insert(root->left, value);
    }
    if(root->data < value)
    {
      root->right = Insert(root->right, value);
    }
  return root;
}
void Node::Inorder(Node* root)
{
  if(!root)
    return;
  Inorder(root->left);
  cout << root->data << " ";
  Inorder(root->right);
}
/*
void Node::printTree(Node* r, int val)
{
   Node* root = Insert(val, r);
   cout << "the inorder BST: "<<endl;
}
*/
int main()
{
   Node n;
   Node* root = NULL;
   root = n.Insert(root, 5);
   n.Insert(root, 5);
   n.Insert(root, 1);
   n.Insert(root, 4);
   n.Insert(root, 3);
   n.Insert(root, 8);
   n.Insert(root, 7);
   n.Insert(root, 6);
   n.Inorder(root);
 //  int v;
 //  n.printTree(root, v);
}

