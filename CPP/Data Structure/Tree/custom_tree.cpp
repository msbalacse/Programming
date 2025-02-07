#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

class BinaryTree
{
private:
    Node *root;

    void inorderHelper(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        inorderHelper(node->left);
        cout << node->data << " ";
        inorderHelper(node->right);
    }

    void preorderHelper(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        cout << node->data << " ";
        preorderHelper(node->left);
        preorderHelper(node->right);
    }

    void postorderHelper(Node *node)
    {
        if (node == nullptr)
        {
            return;
        }
        postorderHelper(node->left);
        postorderHelper(node->right);
        cout << node->data << " ";
    }

    Node *insertHelper(Node *node, int value)
    {
        if (node == nullptr)
        {
            return new Node(value);
        }

        if (value < node->data)
        {
            node->left = insertHelper(node->left, value);
        }
        else
        {
            node->right = insertHelper(node->right, value);
        }

        return node;
    }

public:
    BinaryTree()
    {
        root = nullptr;
    }

    void insert(int value)
    {
        root = insertHelper(root, value);
    }

    // Perform inorder traversal of the tree
    void inorder()
    {
        cout << "Inorder Traversal: ";
        inorderHelper(root);
        cout << endl;
    }

    // Perform preorder traversal of the tree
    void preorder()
    {
        cout << "Preorder Traversal: ";
        preorderHelper(root);
        cout << endl;
    }

    // Perform postorder traversal of the tree
    void postorder()
    {
        cout << "Postorder Traversal: ";
        postorderHelper(root);
        cout << endl;
    }
};

int main()
{
    return 0;
}