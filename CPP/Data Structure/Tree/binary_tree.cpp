#include <iostream>

using namespace std;

struct TreeNode
{
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int value) : data(value), left(nullptr), right(nullptr) {}
};

class BinaryTree
{
private:
    TreeNode *root;

    TreeNode *insert(TreeNode *node, int value)
    {
        if (node == nullptr)
        {
            return new TreeNode(value);
        }

        if (value < node->data)
        {
            node->left = insert(node->left, value);
        }
        else
        {
            node->right = insert(node->right, value);
        }

        return node;
    }

    void inOrder(TreeNode *node)
    {
        if (node == nullptr)
            return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    void preOrder(TreeNode *node)
    {
        if (node == nullptr)
            return;
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder(TreeNode *node)
    {
        if (node == nullptr)
            return;
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }

    bool search(TreeNode *node, int value)
    {
        if (node == nullptr)
            return false;
        if (node->data == value)
            return true;
        return value < node->data ? search(node->left, value) : search(node->right, value);
    }

    void destroyTree(TreeNode *node)
    {
        if (node != nullptr)
        {
            destroyTree(node->left);
            destroyTree(node->right);
            delete node;
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    ~BinaryTree()
    {
        destroyTree(root);
    }

    void insert(int value)
    {
        root = insert(root, value);
    }

    void inOrder()
    {
        inOrder(root);
        cout << endl;
    }

    void preOrder()
    {
        preOrder(root);
        cout << endl;
    }

    void postOrder()
    {
        postOrder(root);
        cout << endl;
    }

    bool search(int value)
    {
        return search(root, value);
    }
};

int main()
{
    BinaryTree tree;

    tree.insert(10);
    tree.insert(5);
    tree.insert(15);
    tree.insert(3);
    tree.insert(7);
    tree.insert(12);
    tree.insert(18);

    cout << "In-order traversal: ";
    tree.inOrder();

    cout << "Pre-order traversal: ";
    tree.preOrder();

    cout << "Post-order traversal: ";
    tree.postOrder();

    cout << "Search for 7: " << (tree.search(7) ? "Found" : "Not found") << endl;
    cout << "Search for 20: " << (tree.search(20) ? "Found" : "Not found") << endl;

    return 0;
}