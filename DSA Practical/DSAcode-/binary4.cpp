#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;
    node(int item)
    {
        this->left = NULL;
        this->right = NULL;
        this->data = item;
    }
};

void insertbtree(node *root, int key)
{
    node *t = new node(key);
    node *temp = root;
    while (1)
    {
        if (temp->data > key)
        {
            if (temp->left == NULL)
            {
                temp->left = t;
                cout << "Node entered successfully\n";
                break;
            }
            temp = temp->left;
        }
        else
        {
            if (temp->right == NULL)
            {
                temp->right = t;
                cout << "Node entered succesfully\n";
                break;
            }
            temp = temp->right;
        }
    }
}

void displayinorder(node *root)
{
    node *temp = root;
    if (temp->left != NULL)
    {
        displayinorder(temp->left);
    }
    cout << temp->data << " ";

    if (temp->right != NULL)
    {
        displayinorder(temp->right);
    }
}

void displaypreorder(node *root)
{
    node *temp = root;
    cout << temp->data << " ";

    if (temp->left != NULL)
    {
        displayinorder(temp->left);
    }

    if (temp->right != NULL)
    {
        displayinorder(temp->right);
    }
}

void displaypostorder(node *root)
{
    node *temp = root;

    if (temp->left != NULL)
    {
        displaypostorder(temp->left);
    }

    if (temp->right != NULL)
    {
        displaypostorder(temp->right);
    }
    cout << temp->data << " ";
}

void level_order(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        root = q.front();
        cout << root->data << " ";
        q.pop();
        if (root->left != NULL)
            q.push(root->left);
        if (root->right != NULL)
            q.push(root->right);
    }
}

node *delete_node(node *root, int key)
{
    if (root == NULL)
    {
        return root;
    }
    if (root->data > key)
    {
        root->left = delete_node(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = delete_node(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            node *successor_parent = root;
            node *successor = root->right;
            while (successor->left != NULL)
            {
                successor_parent = successor;
                successor = successor->left;
            }
            if (successor_parent != root)
            {
                successor_parent->left = successor->right;
            }
            else
            {
                successor_parent->right = successor->right;
            }
            root->data = successor->data;
            delete successor;
        }
    }
    return root;
}

int main()
{
    node *root = NULL;
    node *p = new node(25);
    root = p;
    insertbtree(root, 20);
    insertbtree(root, 6);
    insertbtree(root, 8);
    insertbtree(root, 9);

    displayinorder(root);
    cout << endl;
    displaypreorder(root);
    cout << endl;
    displaypostorder(root);
    cout << endl;
    displayinorder(delete_node(root,8));

}